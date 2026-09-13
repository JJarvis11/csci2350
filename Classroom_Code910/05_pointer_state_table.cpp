/*
CSCI 2350 / Meeting 7 / Activity 5
Build an audio mixer whose active channel persists across commands.
Slides 26-27 define the command behavior. Practice is on slide 28.

Before running: write your prediction and name the object being changed.
Input commands:
m selects the music channel without changing a volume.
v selects the microphone channel without changing a volume.
n clears the active channel without changing a volume.
s value writes through the active channel; with no target, report and skip.

1. Predict every row of the required sequence before editing.
2. Complete selection, cancellation, and the guarded write.
3. Test a write immediately after startup, cancellation followed by reselection,
   and multiple writes without changing the selection.
4. After make 5, rerun with ./.activity_5 for new input.
   After direct compilation below, rerun with ./activity instead.

Run: make 5
Or: g++ -std=c++17 -Wall -Wextra -Wpedantic 05_pointer_state_table.cpp -o activity
    ./activity
Use the WSL/Ubuntu or macOS terminal. For native Windows, see README.md.
*/


#include <iostream>

int main() {
    int musicVolume = 80, micVolume = 90;
    int* active = nullptr;

    // PROVIDED: read commands until end of input. Only s reads an integer.
    char command;
    while (std::cin >> command) {
        int newValue = 0;
        if (command == 's' && !(std::cin >> newValue)) {
            std::cerr << "s requires an integer value.\n";
            return 1;
        }

        if (command != 'm' && command != 'v' &&
            command != 'n' && command != 's') {
            std::cout << "unknown command; no change\n";
            continue;
        }

        // STUDENT LOGIC STARTS HERE.
        if (command == 'm') {
            // TODO 1: activate music. Do not change either volume.
        } else if (command == 'v') {
            // TODO 2: activate the microphone. Do not change either volume.
        } else if (command == 'n') {
            // TODO 3: clear the active channel. Do not change either volume.
        } else if (command == 's') {
            // TODO 4: if there is no active channel, report and skip.
            // Otherwise write newValue through active.
        }
        // STUDENT LOGIC ENDS HERE.

        // PROVIDED: print a stable symbolic target, not an address number.
        std::cout << command;
        if (command == 's') {
            std::cout << ' ' << newValue;
        }
        std::cout << " | ";
        if (active == &musicVolume) {
            std::cout << "&musicVolume";
        } else if (active == &micVolume) {
            std::cout << "&micVolume";
        } else {
            std::cout << "nullptr";
        }
        std::cout << " | " << musicVolume << ' ' << micVolume << '\n';
    }
}
