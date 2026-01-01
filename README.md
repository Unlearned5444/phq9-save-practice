# A Very Silly PHQ-9 Survey Tool

A simple command-line C program that administers the Patient Health Questionnaire-9 (PHQ-9), a standardized tool for assessing depression symptoms over the past two weeks.

## Features

- Asks all 9 PHQ-9 questions with multiple-choice options (0-3 scale).
- Validates input and allows re-entry for invalid answers.
- Provides a review mode to view and optionally change answers.

## Build Instructions

Ensure you have GCC installed. Compile the program with:

```bash
gcc main.c survey.c -o main
```

## Usage

Run the executable:

```bash
./main
```

Follow the prompts to answer each question (0-3), then review your answers. Enter 'y' to change answers or 'n' to finish. It's just that easy!

## Project Structure

- `main.c`: Entry point and main survey loop.
- `survey.c`: Survey logic, functions, and global variables.
- `survey.h`: Header file with declarations.

## License

This is a sample educational project. Use at your own discretion.
