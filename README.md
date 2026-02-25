# Linalg-in-C

A custom numerical linear algebra library built in C that implements fundamental matrix operations and Gaussian elimination to solve Ordinary Least Squares (OLS) regression problems

File Structure

Project Directory/
├── src/                                # Implementation files (.c)
│   ├── matrix.c                        # Memory management & basic arithmetic
│   ├── linalg.c                        # Gaussian elimination & Inverse logic
│   ├── stats.c                         # Regression formulas (Normal Equation)
│   └── main.c                          # The CLI entry point (handles user input)
├── include/                            # Header files (.h)
│   ├── matrix.h
│   ├── linalg.h
│   └── stats.h
├── data/                               # Sample datasets
│   └── example.csv                     # Simple X, Y data for testing
├── tests/                              # Scripts to verify math accuracy
│   └── test_math.c
├── Makefile                            # Build instructions
└── README.md                           # documentation
