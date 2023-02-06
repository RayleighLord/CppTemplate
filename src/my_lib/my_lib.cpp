#include "my_lib.h"

#include <iostream>

__MY_LIB_H__

/**
 * @brief Prints "Hello, world!" to stdout.
 * $$a^2 + b^2 = c^2$$ is a code snippet.
 */
void print_hello() { std::cout << "Hello, world!\n"; }

/**
 * @brief Calculates the factorial of a number `n`.
 * $$n! = n \cdot (n - 1) \cdot (n - 2) \cdot \dots \cdot 1.$$
 * @param n
 * @return unsigned int The factorial of `n`.
 */
unsigned int factorial(unsigned int n) {
    return n <= 1 ? 1 : factorial(n - 1) * n;
}

/**
 * @brief Calculates the `n`th Fibonacci number.
 * $$F_n = F_{n - 1} + F_{n - 2}$$
 *
 * @param n
 * @return unsigned int The `n`th Fibonacci number.
 */
unsigned int fibonacci(unsigned int n) {
    return n < 2 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}
