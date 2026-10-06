# Menu-Driven Algorithmic Utility Tool

A high-efficiency command-line application engineered in **C** that acts as an advanced mathematical and logic processing utility. This project focuses on structured programming, control workflows, space-optimized loops, and fundamental number-theory algorithms frequently evaluated in competitive programming contests like TCS CodeVita.

## 🚀 Key Features & Algorithms
* **Basic & Multi-Variable Arithmetic:** Support for multi-input summation, difference, multiplication, and clean power functions.
* **Algorithmic Computations:** Space-efficient computation of factorials and progressive Fibonacci tracking.
* **Number Theory Logic:** Dynamic validation engines checking for **Armstrong, Palindrome, and Perfect numbers**.
* **Defensive Engineering:** Clean data constraints to effectively eliminate common runtime exceptions like division-by-zero crashes.

## ⚡ Key Optimizations Implemented
* **Stack Overflow Prevention:** The Fibonacci tracking engine computes sequence items iteratively using constant spatial boundaries O(1) instead of initializing risky Variable-Length Arrays (VLAs) on the stack memory frame.
* **Data Overflow Protection:** Upgraded standard integer buffers to `unsigned long long` types for complex math outputs (Factorials and Exponents) to support large numeric computations without variable warping.

## 💻 Technical Stack & Concepts
* **Language:** C (Standard C99 / C11)
* **Core Concepts:** Switch-Case Workflows, Iterative Loops, Modulo Arithmetic, Stream Validation, Constant Space Operations.

## 🛠️ How to Compile & Run
1. Open your terminal or command prompt.
2. Compile the source file using a standard C compiler (GCC):
   ```bash
   gcc main.c -o math_utility
   ```
3. Run the compiled application executable:
   ```bash
   ./math_utility
   ```
