# Secret Code Generator 

##  Description
This is a simple **C++ program** that generates a "secret code" using factorial logic.  
It demonstrates the use of **function pointers** in C++.

- The user enters a number.
- The program computes the factorial of that number.
- The result is displayed as the "secret code."

---

##  How It Works
1. A function `generateCode()` calculates the factorial of a number.
2. A function pointer is used to call `generateCode()`.
3. The user is prompted to enter a number.
4. The program outputs the factorial as the secret code.

---

##  Usage

### Compile the program:
```bash
g++ secret_code.cpp -o secret_code
