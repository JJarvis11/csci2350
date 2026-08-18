# Module 0 Troubleshooting and Q&A

Match the symptom, complete the steps in order, and stop when the success check passes. If the last check still fails, save one compact evidence block using the template at the end and share it with course staff.

## Windows / WSL: error `0x80370102` or Ubuntu will not open

This error usually means that a required Windows feature or hardware virtualization is not active.

### Step 1 - Turn on the two Windows features

1. Press **Windows + R**.
2. Type `optionalfeatures`, then press Enter.
3. Check both boxes:
   - **Windows Subsystem for Linux**
   - **Virtual Machine Platform**
4. Select **OK**, wait for Windows to finish, and **restart the computer**.

### Step 2 - Verify after the restart

Open a normal Windows Terminal tab using PowerShell or Command Prompt and run:

```text
wsl --status
wsl --list --verbose
```

Success means Ubuntu appears and the VERSION column shows `2`. If Ubuntu is missing, run:

```text
wsl --list --online
wsl --install -d Ubuntu
```

### Step 3 - Check hardware virtualization only if the same error remains

1. Press **Ctrl + Shift + Esc** to open Task Manager.
2. Select **Performance**, then **CPU**.
3. Find **Virtualization**.

- If it says **Enabled**, save a screenshot and the output of `wsl --status` and `wsl --list --verbose`. Ask course staff or IT for the next device-specific check.
- If it says **Disabled** on a managed university/work computer, stop and contact IT. Do not change firmware settings yourself.
- If it says **Disabled** on your personal computer, use Windows Recovery settings to open UEFI Firmware Settings. Follow the computer manufacturer's instructions to enable Intel VT-x or AMD-V/SVM, save, and restart. Names and menus vary by manufacturer.

After the restart, repeat Step 2. Do not unregister Ubuntu or delete Linux files while repairing this error.

## Other Windows / WSL installation symptoms

| Symptom | Where to work | Recovery action | Evidence to save if it fails |
|---|---|---|---|
| `wsl --install` shows help text | Administrator Windows Terminal | Run `wsl --list --online`, then `wsl --install -d Ubuntu`. | Both commands and complete output |
| Download remains at `0.0%` | Administrator Windows Terminal | Run `wsl --install --web-download -d Ubuntu`. | Command, percentage, first error |
| Windows build is too old | Run `winver` | Update Windows or use Microsoft's manual WSL guide with course/IT help. | Version and build number |
| No administrator permission / Store blocked | Windows account or managed device | Stop. Ask course staff or IT for an approved route. Repeating the command will not bypass policy. | Screenshot and policy message |
| Two Ubuntu distributions appear | Normal Windows Terminal tab | Run `wsl --list --verbose`. Do not unregister or delete either distribution. | Complete distribution list |

## Which Ubuntu version should I install?

Use the default stable Ubuntu LTS installed by the course command:

```text
wsl --install -d Ubuntu
```

Do not replace an already working LTS installation just to match a number. If course staff or a managed lab requires a numbered release, first list the available names with `wsl --list --online`, then use the exact announced name.

## Copy and paste in WSL Ubuntu

Run Ubuntu as a profile inside Windows Terminal. Use **Ctrl + Shift + V** or right-click to paste when ordinary Ctrl+V does not work. If the Ubuntu profile is missing but Ubuntu is installed, open a normal Windows Terminal tab and run:

```text
wsl -d Ubuntu
```

## VS Code and terminal context

| Symptom | Likely cause | Check and fix |
|---|---|---|
| `code: command not found` in Ubuntu | VS Code PATH or WSL extension not ready | Restart Ubuntu after installing VS Code; confirm the Microsoft WSL extension is installed. |
| `code: command not found` on macOS | One-time PATH action not completed | In VS Code, press Command+Shift+P and run `Shell Command: Install 'code' command in PATH`; reopen Terminal. |
| VS Code terminal begins with `PS C:\\` | Windows window, not WSL | Close the window; open Ubuntu, `cd ~/csci2350/module0`, then run `code .`. |
| `pwd` and VS Code Explorer disagree | Different folders are open | Return to the terminal, enter `~/csci2350/module0`, and run `code .` again. |

## `g++` or `make` is not found

Ubuntu / WSL:

```bash
sudo apt update
sudo apt install build-essential
g++ --version
make --version
```

macOS:

```bash
xcode-select --install
g++ --version
make --version
```

On macOS, `g++ --version` may report Apple Clang. That is expected if compilation works.

## `fatal error: xxx.h: No such file or directory`

First determine whether the missing header is a course file such as `Widget.h` or a system header such as `iostream`.

```bash
pwd
ls -a
make clean
make
```

- For a course/local header, confirm that the file is in the current project, that capitalization matches exactly, and that you are compiling from the folder containing the provided `Makefile`.
- For a standard system header, verify or reinstall the toolchain using the `build-essential` or Apple Command Line Tools steps above.
- Do not invent an include path. Save the first complete compiler error if the file is present but still not found.

After `make` succeeds, run `make run`.

## Git reports `too many arguments` for my name

The multiword name must be inside quotation marks. Folder spaces are a separate `cd` problem.

```bash
git config --global user.name "Grace Hopper"
git config --global user.email "your-email@example.com"
git config --global user.name
git config --global user.email
```

The last two commands must print the saved name and email.

## `git push` asks for a password or authentication fails

GitHub does not accept a GitHub account password for Git operations over HTTPS. For this course, use **Publish to GitHub** or **Sync Changes** in VS Code and complete the browser sign-in prompt. Personal Access Tokens and SSH keys are valid advanced alternatives, but do not paste a token into a course file, screenshot, or help request.

## `config.lock failed: Operation not permitted`

1. Stop duplicate Git, VS Code, or terminal operations for this repository.
2. Confirm the repository is under `~/csci2350`, not `/mnt/c` or a synced Windows folder.
3. If a lock file exists and no Git operation is running, rename it so the action is recoverable, then retry once.
4. If the error remains, save the relevant `pwd`, `git status`, configuration-origin, permission, and lock-file output and ask course staff. Do not use `sudo git`, delete `.git`, or change ownership blindly.

## Other file, compiler, Make, and Git symptoms

| Symptom | First evidence | First fix |
|---|---|---|
| ZIP or `hello.cpp` not found | `pwd`, then `ls -a` | Move to the correct folder; use Tab completion for long, case-sensitive names. |
| `./hello` not found | `ls -l hello hello.cpp` | Compile successfully before running. |
| `make: No targets specified` | `pwd`, `ls -a` | Enter the folder containing the exact filename `Makefile`. |
| `missing separator` | Open `Makefile` | Recipe lines must begin with one real tab, not spaces. |
| Git says `Author identity unknown` | `git config --global --list` | Set `user.name` and `user.email` in the same environment where Git runs. |
| Commit exists but GitHub is unchanged | `git log --oneline -1`, browser page | Publish, Sync, or push; then refresh and verify the browser page. |

## What should I send when asking for help?

Send one compact evidence block:

```text
Checkpoint and step:
Computer and OS/build:
Managed computer? yes / no / unsure
App/terminal and prompt:
pwd result:
Exact command or click path:
Complete first error:
One fix already tried:
```

Never unregister a WSL distribution, delete `.git`, reinstall the operating system, or change BIOS/firmware settings on a managed computer unless course staff or IT explicitly directs you.
