CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic

.PHONY: help list all clean 1 2 3

help: list

list:
	@echo "Use the same numbered make workflow used in class."
	@echo "make 1: check asset_reasoning.cpp"
	@echo "make 2: run the supplied Task B local checks"
	@echo "make 3: run the required Task C report"

all: asset_reasoning asset_collection asset_functions

1: asset_reasoning
	@echo "Task A compiled successfully."

2: asset_collection
	@for file in inputs/B*.txt; do echo "LOCAL CHECK: $$file"; ./asset_collection < $$file; done

3: asset_functions
	@echo "LOCAL CHECK: required Task C report"
	@./asset_functions

asset_reasoning: asset_reasoning.cpp
	$(CXX) $(CXXFLAGS) asset_reasoning.cpp -o asset_reasoning

asset_collection: asset_collection.cpp
	$(CXX) $(CXXFLAGS) asset_collection.cpp -o asset_collection

asset_functions: asset_functions.cpp
	$(CXX) $(CXXFLAGS) asset_functions.cpp -o asset_functions

clean:
	$(RM) asset_reasoning asset_reasoning.exe asset_collection asset_collection.exe asset_functions asset_functions.exe
