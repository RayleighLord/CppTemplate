#include <iostream>

#include "my_lib.h"

int main(int, char **) {
    print_hello();
    std::cout << "5! = " << factorial(5) << std::endl;
    return 0;
}
