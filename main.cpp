#include <iostream>
#include "libraryA.h"
#include "cute_lib/cute/cute.h"

int main() {
    std::cout << "Hello" << std::endl;
    sayHello(std::cout);
    return 0;
}
