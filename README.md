# NumC

A custom library built in C for manual matrix manipulation and statistical modeling. 

File Structure

```text
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
```