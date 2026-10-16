CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -Wpedantic
BIN_DIR := bin

.PHONY: all 1 2 3 clean

all: $(BIN_DIR)/01_pointer_copy_and_write \
	$(BIN_DIR)/02_pointer_reassignment \
	$(BIN_DIR)/03_const_access

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/01_pointer_copy_and_write: 01_pointer_copy_and_write.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/02_pointer_reassignment: 02_pointer_reassignment.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/03_const_access: 03_const_access.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

1: $(BIN_DIR)/01_pointer_copy_and_write
	./$<

2: $(BIN_DIR)/02_pointer_reassignment
	./$<

3: $(BIN_DIR)/03_const_access
	./$<

clean:
	rm -rf $(BIN_DIR)

