#include <wil/resource.h>
#include <iostream>

int test_static = 0;

WI_HEADER_INITIALIZATION_FUNCTION(TestInit, [] {
    std::cout << "Lambda invoked at static init\n";
    test_static = 42;
    return 1;
});

int main() {
    std::cout << "Testing WIL with MinGW cross-compile..." << std::endl;

    std::cout << "test static = " << test_static << "\n";

    // Force some WIL usage that will break under MinGW
    wil::unique_handle h1;
    wil::unique_event e1;

    return 0;
}

