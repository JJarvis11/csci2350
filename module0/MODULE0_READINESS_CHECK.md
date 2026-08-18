# Module 0 Readiness Check - Install, Build, Test, and Publish

## Purpose

Module 0 proves that your complete C++ workflow works. It is a required complete/incomplete readiness check worth 0% of the final course grade, not one of the six graded assignments. The program is intentionally small; the workflow is the important part.

For every phase, keep four questions visible:

| Where am I? | What do I do? | Why am I doing it? | What proves success? |
|---|---|---|---|
| Correct terminal and folder | Run the listed action | Establish one workflow state | Check the named output or file state |

## Files in the package

```text
module0/
|-- .gitignore
|-- hello.cpp
|-- Makefile
|-- MODULE0_READINESS_CHECK.md
|-- START_HERE.md
|-- SUBMISSION_CHECKLIST.md
`-- TROUBLESHOOTING.md
```

Do not commit or submit the generated executable `hello`.

## Checkpoint 1 - Environment ready, or blocker saved

Read the Module 0 study guide and follow only your operating-system route.

### Windows route

- **Where:** Administrator Windows Terminal for WSL installation; the Ubuntu profile in Windows Terminal for course commands.
- **Do:** Install WSL 2 with Ubuntu, VS Code for Windows, the Microsoft WSL extension, `g++`, Make, Git, and `unzip`.
- **Why:** Windows students compile in one consistent Linux environment.
- **Success:** `wsl --list --verbose` shows Ubuntu version 2, and the four version commands work inside Ubuntu/VS Code.

### macOS route

- **Where:** VS Code for the one-time PATH action; Terminal for course commands.
- **Do:** Install VS Code and Apple Command Line Tools; enable the `code` command.
- **Why:** Terminal must be able to compile and open the current folder in VS Code.
- **Success:** The four version commands work and `code .` opens the current folder.

If installation fails, use `TROUBLESHOOTING.md`. Two useful outcomes are acceptable before class: a working environment or one exact blocker with the failed step, command, complete first error, prompt, and folder.

## Checkpoint 2 - Correct Module 0 folder

- **Where:** Ubuntu on Windows; Terminal on macOS.
- **Do:** Put the extracted `module0` folder under `~/csci2350`.
- **Why:** The editor, terminal, compiler, and Git must refer to the same files.
- **Success:** `pwd` ends in `/csci2350/module0`; `ls -a` shows all seven starter files.

`cd` means **change directory**: move the terminal into the `module0` folder.

```bash
cd ~/csci2350/module0
pwd
ls -a
code .
```

Windows students must compile in the Ubuntu/WSL profile, not in a Windows Terminal tab labeled PowerShell or Command Prompt.

## Checkpoint 3 - Personalized source saved

Complete only the two TODO strings in `hello.cpp` so the program prints this form:

```text
Name: Your Name
Course: CSCI 2350
Workflow status: ready
```

Use your own name. Keep the course line exact. You may replace `ready` with a short accurate phrase, but the line must begin with `Workflow status:`. Preserve the quotation marks, semicolons, and `std::` text. Save the file and confirm no TODO remains in the three output lines.

## Checkpoint 4 - Manual compile and run

```bash
g++ -Wall -Wextra -std=c++17 hello.cpp -o hello
./hello
```

- **Why:** Compilation creates or replaces the executable; running is a separate action.
- **Success:** The compile finishes without errors and the program prints the required three lines.

## Checkpoint 5 - Recompile experiment explained

1. Compile and run once.
2. Change only the text after `Workflow status:` and save `hello.cpp`.
3. Run `./hello` without compiling and observe that the old output remains.
4. Compile again with the full course command.
5. Run again and explain aloud why the new output appears only after recompilation.

## Checkpoint 6 - One real diagnostic repaired

1. Temporarily remove one semicolon from a `std::cout` statement.
2. Compile; do not run an old executable.
3. Read the first useful compiler diagnostic and identify its line number.
4. Restore the semicolon, save, compile, and run again.

Do not submit broken code.

## Checkpoint 7 - Makefile workflow verified

You do not need to write the Makefile from memory. You must read it, use it, and explain what it automates.

```bash
make clean
make
make run
make clean
ls -a
```

Success means `make run` prints the three lines and the final `ls -a` shows `hello.cpp` but not the generated `hello` executable.

## Checkpoint 8 - Submission workflow practiced

This is **practice**, not Assignment 1. Assignment 1 releases at the end of Module 2.

1. Set and verify your Git author name and email in the course terminal.
2. Make a meaningful local commit.
3. Publish or sync through VS Code Source Control.
4. Follow the repository-visibility rule shown in the LMS.
5. Open the repository in a browser.
6. Confirm that all seven starter files are visible and executable `hello` is absent.
7. Confirm that the repository URL opens for the instructor.
8. Paste that same verified URL into the Module 0 LMS practice submission.

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global user.name
git config --global user.email
```

Use a GitHub-associated or GitHub noreply email. The same publish, browser-verify, and LMS-submit pattern will be used for assignments.

## AI-use rule

You may use an AI tool to explain an installation error or compiler message only after you save the exact error and attempt the evidence checks in the study guide. You may not use AI to generate the final program or complete the readiness practice for you.
