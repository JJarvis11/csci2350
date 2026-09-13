CXX := g++
CXXFLAGS := -Wall -Wextra -pedantic -std=c++17

.PHONY: help list all clean 1 2 3 4

help: list

list:
	@echo "Reference: Reference/00_meeting4_complete.cpp (read only)"
	@echo "Run make N for the activity number shown on the slide."
	@echo "make 1: 01_return_average.cpp"
	@echo "make 2: 02_report_scope.cpp"
	@echo "make 3: 03_complete_score_report.cpp"
	@echo "make 4: 04_tolerance_optional.cpp (optional)"

all: 01_return_average 02_report_scope 03_complete_score_report 04_tolerance_optional

01_return_average: 01_return_average.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

1: 01_return_average
	@echo "ACTIVITY 1: return the local average"
	@./01_return_average

02_report_scope: 02_report_scope.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

2: 02_report_scope
	@echo "ACTIVITY 2: one function, two calls"
	@./02_report_scope

03_complete_score_report: 03_complete_score_report.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

3: 03_complete_score_report
	@echo "ACTIVITY 3 — TEST A: invalid attempts are retried"
	@./03_complete_score_report < inputs/03_typical.txt
	@echo "ACTIVITY 3 — TEST B: grade boundaries"
	@./03_complete_score_report < inputs/03_boundaries.txt

04_tolerance_optional: 04_tolerance_optional.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

4: 04_tolerance_optional
	@echo "OPTIONAL ACTIVITY 4: exact equality and tolerance"
	@./04_tolerance_optional

clean:
	rm -f 01_return_average 02_report_scope 03_complete_score_report 04_tolerance_optional
