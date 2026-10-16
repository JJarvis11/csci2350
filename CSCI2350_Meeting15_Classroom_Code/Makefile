CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
.DEFAULT_GOAL := list
.PHONY: list clean demo01 demo02 demo03 demo04 demo05 demo06 demo07 demo08 demo09 demo10 demo11 demo12 demo13 demo14 demo15 diag01 diag02 diag03 1 2

list:
	@echo "make demo01: demos/01_parallel_arrays.cpp"
	@echo "make demo02: demos/02_dot_member.cpp"
	@echo "make demo03: demos/03_record_swap.cpp"
	@echo "make demo04: demos/04_copy_and_reference.cpp"
	@echo "make demo05: demos/05_checked_free_function.cpp"
	@echo "make demo06: demos/06_public_bypass.cpp"
	@echo "make demo07: demos/07_member_function.cpp"
	@echo "make demo08: demos/08_member_receivers.cpp"
	@echo "make demo09: demos/09_public_member_bypass.cpp"
	@echo "make demo10: demos/10_public_reader.cpp"
	@echo "make demo11: demos/11_public_interface.cpp"
	@echo "make demo12: demos/12_unchecked_private_setter.cpp"
	@echo "make demo13: demos/13_checked_class.cpp"
	@echo "make demo14: demos/14_copy_and_reference.cpp"
	@echo "make demo15: demos/15_equivalent_class.cpp"
	@echo "make diag01: diagnostics/01_private_read.cpp [expected compile error]"
	@echo "make diag02: diagnostics/02_private_write.cpp [expected compile error]"
	@echo "make diag03: diagnostics/03_private_initialization.cpp [expected compile error]"
	@echo "make 1: practice/01_member_receiver.cpp"
	@echo "make 2: practice/02_score_updater.cpp"

demo01:
	@$(CXX) $(CXXFLAGS) demos/01_parallel_arrays.cpp -o .activity_demo01
	@./.activity_demo01

demo02:
	@$(CXX) $(CXXFLAGS) demos/02_dot_member.cpp -o .activity_demo02
	@./.activity_demo02

demo03:
	@$(CXX) $(CXXFLAGS) demos/03_record_swap.cpp -o .activity_demo03
	@./.activity_demo03

demo04:
	@$(CXX) $(CXXFLAGS) demos/04_copy_and_reference.cpp -o .activity_demo04
	@./.activity_demo04

demo05:
	@$(CXX) $(CXXFLAGS) demos/05_checked_free_function.cpp -o .activity_demo05
	@./.activity_demo05

demo06:
	@$(CXX) $(CXXFLAGS) demos/06_public_bypass.cpp -o .activity_demo06
	@./.activity_demo06

demo07:
	@$(CXX) $(CXXFLAGS) demos/07_member_function.cpp -o .activity_demo07
	@./.activity_demo07

demo08:
	@$(CXX) $(CXXFLAGS) demos/08_member_receivers.cpp -o .activity_demo08
	@./.activity_demo08

demo09:
	@$(CXX) $(CXXFLAGS) demos/09_public_member_bypass.cpp -o .activity_demo09
	@./.activity_demo09

demo10:
	@$(CXX) $(CXXFLAGS) demos/10_public_reader.cpp -o .activity_demo10
	@./.activity_demo10

demo11:
	@$(CXX) $(CXXFLAGS) demos/11_public_interface.cpp -o .activity_demo11
	@./.activity_demo11

demo12:
	@$(CXX) $(CXXFLAGS) demos/12_unchecked_private_setter.cpp -o .activity_demo12
	@./.activity_demo12

demo13:
	@$(CXX) $(CXXFLAGS) demos/13_checked_class.cpp -o .activity_demo13
	@./.activity_demo13

demo14:
	@$(CXX) $(CXXFLAGS) demos/14_copy_and_reference.cpp -o .activity_demo14
	@./.activity_demo14

demo15:
	@$(CXX) $(CXXFLAGS) demos/15_equivalent_class.cpp -o .activity_demo15
	@./.activity_demo15

diag01:
	@$(CXX) $(CXXFLAGS) diagnostics/01_private_read.cpp -o .activity_diag01
	@./.activity_diag01

diag02:
	@$(CXX) $(CXXFLAGS) diagnostics/02_private_write.cpp -o .activity_diag02
	@./.activity_diag02

diag03:
	@$(CXX) $(CXXFLAGS) diagnostics/03_private_initialization.cpp -o .activity_diag03
	@./.activity_diag03

1:
	@$(CXX) $(CXXFLAGS) practice/01_member_receiver.cpp -o .activity_1
	@./.activity_1

2:
	@$(CXX) $(CXXFLAGS) practice/02_score_updater.cpp -o .activity_2
	@./.activity_2

clean:
	@rm -f .activity_* activity activity.exe
