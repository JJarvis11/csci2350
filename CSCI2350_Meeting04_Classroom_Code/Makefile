CXX := g++
CXXFLAGS := -Wall -Wextra -Wpedantic -std=c++17
PROGRAM := .meeting04_activity
.DEFAULT_GOAL := help
.PHONY: help clean 1 2 3 4 5 6 7

help:
	@echo "Choose one activity: make N (1 through 7)"

1:
	@$(CXX) $(CXXFLAGS) 01_stop_before_processing.cpp -o $(PROGRAM)
	@./$(PROGRAM)

2:
	@$(CXX) $(CXXFLAGS) 02_count_valid_scores.cpp -o $(PROGRAM)
	@./$(PROGRAM)

3:
	@$(CXX) $(CXXFLAGS) 03_three_valid_scores.cpp -o $(PROGRAM)
	@./$(PROGRAM)

4:
	@$(CXX) $(CXXFLAGS) 04_do_while_retry.cpp -o $(PROGRAM)
	@./$(PROGRAM)

5:
	@$(CXX) $(CXXFLAGS) 05_student_totals.cpp -o $(PROGRAM)
	@./$(PROGRAM)

6:
	@$(CXX) $(CXXFLAGS) 06_complete_score_recorder.cpp -o $(PROGRAM)
	@./$(PROGRAM)

7:
	@$(CXX) $(CXXFLAGS) 07_early_stop_score_recorder.cpp -o $(PROGRAM)
	@./$(PROGRAM)

clean:
	rm -f $(PROGRAM) $(PROGRAM).exe
