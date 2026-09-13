CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic
BUILD_DIR := build

.PHONY: list 1 2 3 4 5 6 7 8 clean

list:
	@printf '%s\n' \
	  'Meeting 02 aligned classroom code' \
	  '' \
	  '  make 1      repeat the hello workflow with Make' \
	  '  make 2      identify program anatomy' \
	  '  make 3      predict exact output' \
	  '  make 4      follow variable state' \
	  '  make 5      trace typed input' \
	  '  make 6      repair the input/output data path' \
	  '  make 7      predict division results' \
	  '  make 8      repair and test Course Snapshot' \
	  '' \
	  '  make clean  remove generated executables'

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

hello: activity01_hello_workflow.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

1: hello
	./hello

2: $(BUILD_DIR)/activity02_program_anatomy
	./$(BUILD_DIR)/activity02_program_anatomy

3: $(BUILD_DIR)/activity03_output_prediction
	./$(BUILD_DIR)/activity03_output_prediction

4: $(BUILD_DIR)/activity04_variable_state
	./$(BUILD_DIR)/activity04_variable_state

5: $(BUILD_DIR)/activity05_typed_input
	@printf '%s\n' 'Enter: Ada 00123456 90 88 85'
	./$(BUILD_DIR)/activity05_typed_input

6: $(BUILD_DIR)/activity06_data_path_debug
	printf 'Ada 88\n' | ./$(BUILD_DIR)/activity06_data_path_debug

7: $(BUILD_DIR)/activity07_division_prediction
	./$(BUILD_DIR)/activity07_division_prediction

8: $(BUILD_DIR)/activity08_course_snapshot
	@printf '%s\n' 'TEST 1: divisible total'
	printf 'Ada 00123456 90 87 84\n' | ./$(BUILD_DIR)/activity08_course_snapshot
	@printf '%s\n' 'TEST 2: total with a remainder'
	printf 'Ada 00123456 90 88 85\n' | ./$(BUILD_DIR)/activity08_course_snapshot

clean:
	rm -rf $(BUILD_DIR) hello
