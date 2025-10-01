#include <wil/resource.h>
#include <iostream>

int main() {
    std::cout << "Testing WIL with MinGW cross-compile..." << std::endl;

    // Force some WIL usage that will break under MinGW
    wil::unique_handle h1;
    wil::unique_event e1;

    return 0;
}

