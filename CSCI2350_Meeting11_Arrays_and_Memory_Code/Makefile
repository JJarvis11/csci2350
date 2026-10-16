CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
SANFLAGS := -g -O0 -fsanitize=address,undefined -fno-omit-frame-pointer
RUN_ENV := ASAN_OPTIONS=detect_leaks=1:halt_on_error=1 UBSAN_OPTIONS=halt_on_error=1
BIN_DIR := bin

.DEFAULT_GOAL := list
.PHONY: list all demo1 demo2 demo3 1 2 3 test1 test2 test3 check clean

list:
	@echo "make all       # Compile all demos and practice files without running them"
	@echo "make demo1..3  # Compile and run one lecture demonstration"
	@echo "make 1         # Run the array-initialization practice"
	@echo "make 2         # Run the current addBonus practice"
	@echo "make 3         # Run the current dynamic workflow with count 4"
	@echo "make test1/2/3 # Check the corresponding practice"
	@echo "make check     # Run all practice checks"

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/demo1: demos/01_address_then_read.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/demo2: demos/02_function_calls.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/demo3: demos/03_copied_value.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/practice1: practice/01_array_initialization.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/practice2: practice/02_add_bonus.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/practice3: practice/03_dynamic_workflow.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

all: $(BIN_DIR)/demo1 $(BIN_DIR)/demo2 $(BIN_DIR)/demo3 $(BIN_DIR)/practice1 $(BIN_DIR)/practice2 $(BIN_DIR)/practice3

demo1: $(BIN_DIR)/demo1
	@./$(BIN_DIR)/demo1

demo2: $(BIN_DIR)/demo2
	@./$(BIN_DIR)/demo2

demo3: $(BIN_DIR)/demo3
	@./$(BIN_DIR)/demo3

1: $(BIN_DIR)/practice1
	@./$(BIN_DIR)/practice1

2: $(BIN_DIR)/practice2
	@./$(BIN_DIR)/practice2

3: $(BIN_DIR)/practice3
	@printf '4\n' | ./$(BIN_DIR)/practice3

test1: | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SANFLAGS) practice/01_array_initialization.cpp -o $(BIN_DIR)/test1
	@$(RUN_ENV) ./$(BIN_DIR)/test1 > $(BIN_DIR)/test1.out
	@cat $(BIN_DIR)/test1.out
	@printf '0:72\n1:0\n2:0\n3:0\n' | cmp -s - $(BIN_DIR)/test1.out || { echo "Restore the supplied partial initializer before test1."; exit 1; }
	@echo "Practice 1 output and sanitizer checks passed."

test2: | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SANFLAGS) practice/02_add_bonus.cpp -o $(BIN_DIR)/test2
	@$(RUN_ENV) ./$(BIN_DIR)/test2 > $(BIN_DIR)/test2.out
	@cat $(BIN_DIR)/test2.out
	@printf '77 100 60 105 \n5 \n' | cmp -s - $(BIN_DIR)/test2.out || { echo "Practice 2 output does not match the required result."; exit 1; }
	@echo "Practice 2 output and sanitizer checks passed."

test3: | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SANFLAGS) practice/03_dynamic_workflow.cpp -o $(BIN_DIR)/test3
	@printf '4\n' | $(RUN_ENV) ./$(BIN_DIR)/test3 > $(BIN_DIR)/test3_count4.out
	@cat $(BIN_DIR)/test3_count4.out
	@printf '75 76 77 78 \n' | cmp -s - $(BIN_DIR)/test3_count4.out || { echo "Count-four output does not match."; exit 1; }
	@printf '1\n' | $(RUN_ENV) ./$(BIN_DIR)/test3 > $(BIN_DIR)/test3_count1.out
	@cat $(BIN_DIR)/test3_count1.out
	@printf '75 \n' | cmp -s - $(BIN_DIR)/test3_count1.out || { echo "Count-one output does not match."; exit 1; }
	@printf '0\n' | $(RUN_ENV) ./$(BIN_DIR)/test3 > $(BIN_DIR)/test3_count0.out
	@cat $(BIN_DIR)/test3_count0.out
	@printf 'count must be 1..8\n' | cmp -s - $(BIN_DIR)/test3_count0.out || { echo "Rejected-count output does not match."; exit 1; }
	@echo "Practice 3 outputs and sanitizer checks passed."

check: test1 test2 test3

clean:
	rm -rf $(BIN_DIR)
