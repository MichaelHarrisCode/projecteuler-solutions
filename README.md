# Solutions for Project Euler
This repository contains code solutions for Project Euler problems, written in the C programming language.

# Project Euler
Project Euler (https://projecteuler.net/) is a website, which describes itself as "a series of challenging mathematical/computer programming problems that will require more than just mathematical insights to solve." Essentially, these are problems that require programming to solve. Currently, there are over 800 problems.

# Goal
My goal is to solve atleast one problem each day. When it's solved, I will push the code that solved the equation to this repository.

# Format
Each file will be named following the format of `p000.c`, where the number is replaced with the ID of the problem.
In the C file, there will be a multi-line comment at the top, containing the problem title and description, as follows:
```
/**
 * TITLE
 *
 * PROBLEM DESCRIPTION
 */
```

For example, problem 1 would be titled `p001.c` and would have this comment:
```
/**
 * Multiples of 3 or 5
 * 
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23. 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
```

# Code Style
Since I aspire to be a developer for the linux kernel, I will try to apply the Linux kernel coding style for these problems.
Documents for the coding style can be found here: https://www.kernel.org/doc/html/v4.15/process/coding-style.html