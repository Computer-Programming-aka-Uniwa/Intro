<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
</p>

---

<p align="center">
  <strong>Computer Programming</strong>
</p>

<h1 align="center">
  Introduction to C Programming
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Nikolaos Vassilas, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/nikolaos-vassilas/" target="_blank">UNIWA Profile</a>
</p>

<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

---

<p align="center">
  Athens, October 2021
</p>

---

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" width="250"/>
</p>

---

# README

## Introduction to C Programming

This report covers the **fundamental concepts of the C programming language**, including:

- The definition of a computer program
- The software development lifecycle
- Categories of programming errors

In addition, it presents a **practical analysis of a C program** designed to perform basic arithmetic operations on integers, highlighting common mistakes and their corrections.

---

## Table of Contents

| Section | Folder / File           | Description                                          |
| ------: | ----------------------- | ---------------------------------------------------- |
|       1 | `assign/`               | Assignment material                                  |
|     1.1 | `assign/project1.png`   | Assignment description / problem statement (English) |
|     1.2 | `assign/εργασία1.png`   | Assignment description / problem statement (Greek)   |
|       2 | `docs/`                 | Theoretical documentation                            |
|     2.1 | `docs/Introduction.pdf` | Introductory theory and concepts (English)           |
|     2.2 | `docs/Εισαγωγή.pdf`     | Introductory theory and concepts (Greek)             |
|       3 | `src/`                  | Source code implementations                          |
|     3.1 | `src/C1aCorrect.c`      | Correct implementation of the exercise               |
|     3.2 | `src/C1aWrong.c`        | Incorrect implementation (for comparison / analysis) |
|       4 | `README.md`             | Project documentation                                |
|       5 | `INSTALL.md`            | Usage instructions                                   |

---

## 1. Theory Fundamentals

### 1.1 What Is a Program?

A **program** is defined as a sequence of commands provided by a user to solve a specific problem. These commands instruct the computer on how to process data and produce the desired output.

---

### 1.2 Steps of C Program Development

The report outlines the following **seven key stages** involved in developing and executing a C program:

1. **Editing**  
   Writing the source code using a C programming environment.

2. **Saving**  
   Storing the source code in a file with the `.c` extension.

3. **Compilation**  
   Using a compiler to detect and report syntax errors in the source code.

4. **Machine Language Conversion**  
   Translating the corrected source code into an object file (`.obj`) that the processor can understand.

5. **Linking**  
   Connecting the object file with required libraries (e.g., `stdio.h`) to produce an executable file (`.exe`).

6. **Executable Generation**  
   Finalizing the executable file so it can be run by the operating system.

7. **Running**  
   Executing the program to perform its intended operations and produce output.

---

### 1.3 Categories of Program Errors

| Error Type        | Description                                             | Example                               |
| ----------------- | ------------------------------------------------------- | ------------------------------------- |
| **Syntax Error**  | Violations of the language’s grammatical rules          | Missing semicolon or quotation mark   |
| **Logical Error** | Errors in logic that the compiler cannot detect         | Using subtraction instead of addition |
| **Runtime Error** | Errors that occur during execution and stop the program | Division by zero                      |

---

## 2. Practical Source Code Analysis

The paper analyzes two versions of a C program:

- **`C1aWrong.c`** – Contains multiple errors
- **`C1aCorrect.c`** – Corrected version of the program

### 2.1 Common Syntax Errors Identified

- **Missing Quotes**  
  Failure to close a string literal in a `printf()` statement.

- **Case Sensitivity**  
  Attempting to use a lowercase variable (`c`) when it was declared as uppercase (`C`).

- **Character Encoding Issues**  
  Using a Greek character **"Ε"** instead of the Latin **"E"** in a variable name.

- **Typographical Errors**  
  Misspelling `printf` as `prantf`, which is detected during the linking stage.

---

## 3. Execution Examples and Observations

The program was tested using various integer inputs to demonstrate how C handles arithmetic operations.

### 3.1 Integer Division

When performing the operation:

```bash
5/10
```

The program returns:

```bash
0
```

This occurs because both operands are declared as `int`. As a result, the decimal portion of the division is **truncated**, not rounded.

---

### 3.2 Integer Overflow

Using very large values (e.g., `54,645,234,234`) produces incorrect negative results.  
This behavior is caused by **integer overflow**, where the value exceeds the maximum range supported by the standard `int` data type.
