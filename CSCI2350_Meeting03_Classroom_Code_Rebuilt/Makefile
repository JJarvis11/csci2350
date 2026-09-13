CXX := g++
CXXFLAGS := -Wall -Wextra -Wpedantic -std=c++17
PROGRAM := .meeting03_activity

.PHONY: help 1 2 3 4 5 6 7 8 9 clean

help:
	@echo "Meeting 03 activities"
	@echo "  make 1   Comparisons and bool output"
	@echo "  make 2   Build an inside-range rule"
	@echo "  make 3   Apply De Morgan's law"
	@echo "  make 4   Repair a chained comparison"
	@echo "  make 5   Guard division with short-circuit AND"
	@echo "  make 6   Observe integer conditions"
	@echo "  make 7   Observe assignment in a condition"
	@echo "  make 8   Complete an else-if grade ladder"
	@echo "  make 9   Complete a switch statement"
	@echo "  make clean"

1:
	@$(CXX) $(CXXFLAGS) 01_comparisons.cpp -o $(PROGRAM)
	@./$(PROGRAM)

2:
	@$(CXX) $(CXXFLAGS) 02_inside_range.cpp -o $(PROGRAM)
	@./$(PROGRAM)

3:
	@$(CXX) $(CXXFLAGS) 03_de_morgan.cpp -o $(PROGRAM)
	@./$(PROGRAM)

4:
	@$(CXX) $(CXXFLAGS) 04_chained_comparison.cpp -o $(PROGRAM)
	@./$(PROGRAM)

5:
	@$(CXX) $(CXXFLAGS) 05_short_circuit.cpp -o $(PROGRAM)
	@./$(PROGRAM)

6:
	@$(CXX) $(CXXFLAGS) 06_integer_condition.cpp -o $(PROGRAM)
	@./$(PROGRAM)

7:
	@$(CXX) $(CXXFLAGS) 07_assignment_condition.cpp -o $(PROGRAM)
	@./$(PROGRAM)

8:
	@$(CXX) $(CXXFLAGS) 08_grade_ladder.cpp -o $(PROGRAM)
	@./$(PROGRAM)

9:
	@$(CXX) $(CXXFLAGS) -Wno-unused-variable 09_report_switch.cpp -o $(PROGRAM)
	@./$(PROGRAM)

clean:
	@rm -f $(PROGRAM)
