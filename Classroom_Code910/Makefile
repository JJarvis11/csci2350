CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
UBSANFLAGS := -fsanitize=undefined -fno-sanitize-recover=undefined -g
.DEFAULT_GOAL := list
.PHONY: list clean 1 2 3 4 4-ubsan 5

list:
	@echo "make 1    # 01_address_value.cpp"
	@echo "make 2    # 02_dereference_write.cpp"
	@echo "make 3    # 03_retarget_pointer.cpp"
	@echo "make 4    # 04_null_guard.cpp"
	@echo "make 4-ubsan # 04_null_guard.cpp with UndefinedBehaviorSanitizer"
	@echo "make 5    # 05_pointer_state_table.cpp"

1:
	@$(CXX) $(CXXFLAGS) 01_address_value.cpp -o .activity_1
	@./.activity_1

2:
	@$(CXX) $(CXXFLAGS) 02_dereference_write.cpp -o .activity_2
	@./.activity_2

3:
	@$(CXX) $(CXXFLAGS) 03_retarget_pointer.cpp -o .activity_3
	@./.activity_3

4:
	@$(CXX) $(CXXFLAGS) 04_null_guard.cpp -o .activity_4
	@./.activity_4

4-ubsan:
	@$(CXX) $(CXXFLAGS) $(UBSANFLAGS) 04_null_guard.cpp -o .activity_4_ubsan
	@./.activity_4_ubsan

5:
	@$(CXX) $(CXXFLAGS) 05_pointer_state_table.cpp -o .activity_5
	@printf 'm\ns 85\ns 0\nv\ns 95\nn\ns 999\n' | ./.activity_5

clean:
	@rm -f .activity_1 .activity_2 .activity_3 .activity_4 .activity_4_ubsan .activity_5 activity activity.exe
