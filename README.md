# 🔀 1-to-4 Demultiplexer — C

A console-based 1-to-4 demultiplexer simulator written in C, implementing digital logic concepts in software. Developed as part of a computer engineering assignment.

---

## Overview

This program simulates a **1-to-4 demultiplexer** — a fundamental digital logic component that routes a single input signal to one of four outputs based on two selector bits. Supports both binary (base-2) and decimal (base-10) input modes with full input validation.

---

## Features

- **Dual input mode** — accepts input in base-2 (binary) or base-10 (decimal)
- **Full input validation** — detects invalid characters, too few or too many bits, and out-of-range decimal values
- **Interactive menu** — user-friendly loop with quit option
- **Correct demultiplexer logic** — outputs Y0–Y3 computed from selector bits S1, S0 and data input D

---

## How It Works

| Inputs        | Active Output |
|---------------|---------------|
| S1=0, S0=0, D=1 | Y0 = 1      |
| S1=0, S0=1, D=1 | Y1 = 1      |
| S1=1, S0=0, D=1 | Y2 = 1      |
| S1=1, S0=1, D=1 | Y3 = 1      |
| Any, D=0        | All outputs = 0 |

---

## Sample Output

```
Welcome to 1 TO 4 DEMULTIPLEXER!
a) Compute and Display the outputs
b) Quit
You choose: a
Which base will you use to enter input (base 2 or base 10)? 2
Please enter your input: 011
Y3 is 0 Y2 is 0 Y1 is 1 Y0 is 0
```

---

## How to Run

```bash
gcc Zeynep-Orman-Multiplexer.c -o demux
./demux
```

---

## Concepts Used

- Digital logic — demultiplexer truth table implementation
- Input validation (bit length, character checking, range checking)
- Base conversion (decimal to binary)
- ASCII character arithmetic in C
- Loop control and menu-driven program design

---

## Author

**Zeynep Orman** — Software Engineering Student, METU Northern Cyprus Campus
