CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
.DEFAULT_GOAL := list
.PHONY: list clean 1 2 3 4 5 5-demo 6

list:
	@echo "make 1    # 01_value_parameter.cpp"
	@echo "make 2    # 02_reference_outputs.cpp"
	@echo "make 3    # 03_reference_assignment.cpp"
	@echo "make 4    # 04_const_reference.cpp"
	@echo "make 5    # 05_range_report.cpp, enter four scores"
	@echo "make 5-demo # 05_range_report.cpp, sample input"
	@echo "make 6    # 06_reference_call_check.cpp"

1:
	@$(CXX) $(CXXFLAGS) 01_value_parameter.cpp -o .activity_1
	@./.activity_1

2:
	@$(CXX) $(CXXFLAGS) 02_reference_outputs.cpp -o .activity_2
	@./.activity_2

3:
	@$(CXX) $(CXXFLAGS) 03_reference_assignment.cpp -o .activity_3
	@./.activity_3

4:
	@$(CXX) $(CXXFLAGS) 04_const_reference.cpp -o .activity_4
	@./.activity_4

5:
	@$(CXX) $(CXXFLAGS) 05_range_report.cpp -o .activity_5
	@./.activity_5

5-demo:
	@$(CXX) $(CXXFLAGS) 05_range_report.cpp -o .activity_5
	@printf '72 95 55 80\n' | ./.activity_5

6:
	@$(CXX) $(CXXFLAGS) 06_reference_call_check.cpp -o .activity_6
	@./.activity_6

clean:
	@rm -f .activity_1 .activity_2 .activity_3 .activity_4 .activity_5 .activity_6 activity activity.exe
