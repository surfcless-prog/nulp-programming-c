# Lab: Functions & Pointers in C / Робота з функціями та вказівниками

[English](#english) | [Українська](#українська)

---

## English

C program that finds the number with the highest sum of digits among up to 10 user-entered numbers (or until `0` is entered). Features custom ASCII frame output.

### Key concepts
- Custom functions and function prototypes
- Pass-by-pointer parameters (`int*`) to return multiple values from a function
- Digit extraction algorithm using modulo (`% 10`) and division (`/ 10`)
- `do-while` loop with input validation
- Custom ASCII border formatting

### How to run
```bash
gcc main.c -o max_sum
./max_sum
```

---

## Українська

Програма мовою C для пошуку числа з найбільшою сумою цифр серед введених користувачем (до 10 чисел або до введення `0`). Результат виводиться у форматованій ASCII-рамці.

### Ключові концепції
- Власні функції та їх прототипи
- Передача параметрів за посиланням через вказівники (`int*`)
- Алгоритм виділення цифр числа через остачу від ділення (`% 10`) та ділення (`/ 10`)
- Цикл `do-while` з умовою переривання
- Форматоване виведення консольної рамки

### Як запустити
```bash
gcc main.c -o max_sum
./max_sum
```