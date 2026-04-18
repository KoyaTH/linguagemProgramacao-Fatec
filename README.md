# Programming Language - Fatec

This repository is a collection of C programs, examples and exercises used in the Fatec Taguaritinga class for learning and practicing C programming.

Although filenames and folder names are in Portuguese (for the class), the code is standard C and can be compiled on most C toolchains.

## About

- Purpose: store working examples, small exercises and class demos written in C during the Fatec Taguaritinga course.
- Target audience: students learning C in the Fatec Taguaritinga class and anyone who wants small, self-contained C examples.

## Repository structure

- Each `AulaXXXX` folder groups files by class date. Typical contents:
  - example source files (`*.c`)
  - compiled executables (`*.exe`) when available
  - subfolders such as `exemplos` or `exercicios` with focused samples or exercises

Example:

- `Aula0417/exemplos/for2.c` — an example showing `for` loop usage

## Requirements

- A C compiler (GCC / MinGW, clang, or MSVC). On Windows, MinGW-w64 or the TDM/MinGW distribution works well.
- Optional: Visual Studio Code; the workspace includes simple tasks to build the active C file.

## Build & run (PowerShell / Windows)

Compile a single file with GCC/MinGW:

```powershell
gcc -g .\Aula0417\exemplos\for2.c -o .\Aula0417\exemplos\for2.exe
.\Aula0417\exemplos\for2.exe
```

Or use the provided VS Code build task (if configured): select `Run Build Task` or the `C/C++: gcc.exe build active file` task.

Notes:
- Some folders already contain compiled `*.exe` files produced during class. If you prefer, you can delete them and recompile the `*.c` sources on your machine.
- When compiling on Linux/macOS, the executable extension `.exe` is optional; use `./a.out` or `./for2` as appropriate.