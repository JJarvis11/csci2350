CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
SANFLAGS := -g -O0 -fsanitize=address,undefined -fno-omit-frame-pointer -fno-pie -no-pie
RUN_ENV := ASAN_OPTIONS=detect_leaks=1:halt_on_error=1 UBSAN_OPTIONS=halt_on_error=1
BIN_DIR := bin
.DEFAULT_GOAL := list
.PHONY: list 1 2 3 test1 test2 test3 observe2 error-scope error-local error-use error-leak scope repairs clean error-lifetime

list:
	@echo "make 1          # Practice 1: run, edit, compare"
	@echo "make observe2   # Practice 2: observe the starter's invalid read"
	@echo "make 2          # Practice 2: run the current file with sanitizer"
	@echo "make 3          # Practice 3: run after completing TODO_WORKFLOW"
	@echo "make test1/2/3  # Check the corresponding final output with sanitizer"
	@echo "Demos: make error-scope / error-lifetime / error-local / error-use / error-leak"
	@echo "Repairs: make scope / repairs"

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

1: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) 01_lifetime.cpp -o $(BIN_DIR)/activity_1
	@./$(BIN_DIR)/activity_1

2: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) 02_repair_read.cpp -o $(BIN_DIR)/activity_2
	@$(RUN_ENV) ./$(BIN_DIR)/activity_2

3: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) 03_lifecycle.cpp -o $(BIN_DIR)/activity_3
	@./$(BIN_DIR)/activity_3

# These checks compare exact stdout and stop on detected memory errors.
# Explain the operation order and inspect pointer resets in the C++ source.
define check_practice
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) $(1) -o $(BIN_DIR)/test_$(2)
	@$(RUN_ENV) ./$(BIN_DIR)/test_$(2) > $(BIN_DIR)/test_$(2).out
	@cat $(BIN_DIR)/test_$(2).out
	@printf '$(3)\n' | cmp -s - $(BIN_DIR)/test_$(2).out || { echo "Expected stdout: $(3)"; exit 1; }
	@echo "Output check passed; no sanitizer error reported. Explain cleanup and pointer resets from the source."
endef

test1: | $(BIN_DIR)
	$(call check_practice,01_lifetime.cpp,1,85)
test2: | $(BIN_DIR)
	$(call check_practice,02_repair_read.cpp,2,72)
test3: | $(BIN_DIR)
	$(call check_practice,03_lifecycle.cpp,3,92)

# An intentional error succeeds as an experiment only with its specific report.
define expect_report
	@status=0; $(RUN_ENV) ./$(BIN_DIR)/$(1) > $(BIN_DIR)/$(1).log 2>&1 || status=$$?; \
	cat $(BIN_DIR)/$(1).log; \
	test $$status -ne 0 && grep -q '$(2)' $(BIN_DIR)/$(1).log || { echo "Expected diagnostic was not found."; exit 1; }
endef

observe2: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) 02_repair_read.cpp -o $(BIN_DIR)/observe2
	$(call expect_report,observe2,ERROR: AddressSanitizer: heap-use-after-free)

error-lifetime: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) -fsanitize-address-use-after-scope diagnostics/07_block_lifetime.cpp -o $(BIN_DIR)/error_lifetime
	$(call expect_report,error_lifetime,ERROR: AddressSanitizer: stack-use-after-scope)

error-use: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) diagnostics/03_use_after_free.cpp -o $(BIN_DIR)/error_use
	$(call expect_report,error_use,ERROR: AddressSanitizer: heap-use-after-free)

error-leak: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) diagnostics/05_lost_allocation.cpp -o $(BIN_DIR)/error_leak
	$(call expect_report,error_leak,ERROR: LeakSanitizer: detected memory leaks)

error-scope: | $(BIN_DIR)
	@status=0; $(CXX) $(CXXFLAGS) -fsyntax-only diagnostics/06_scope_name.cpp > $(BIN_DIR)/error_scope.log 2>&1 || status=$$?; \
	cat $(BIN_DIR)/error_scope.log; \
	test $$status -ne 0 && grep -q 'quiz.*not declared' $(BIN_DIR)/error_scope.log

# Compile only. Never run the caller that reads through the returned local address.
error-local: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) -Wreturn-local-addr -fsyntax-only diagnostics/02_local_address.cpp > $(BIN_DIR)/error_local.log 2>&1
	@cat $(BIN_DIR)/error_local.log
	@grep -q 'warning:.*local' $(BIN_DIR)/error_local.log

scope: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) examples/04_scope.cpp -o $(BIN_DIR)/scope
	@./$(BIN_DIR)/scope

repairs: | $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) $(SANFLAGS) examples/03_repaired_errors.cpp -o $(BIN_DIR)/repairs
	@$(RUN_ENV) ./$(BIN_DIR)/repairs

clean:
	rm -rf $(BIN_DIR)
