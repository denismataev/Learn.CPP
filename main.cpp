#include "array.h"
#include <iostream>

int main() {
    const int size{5};
    int massive[size]{5, 1, 2, 6, 1};

    int i_min{}, i_max{};
    
    std::cout << "i_min: " << i_min << "\ti_max: " << i_max << '\\n';

    int _sum{};
    int begin{}, end{};
   
    std::cout << "sum: " << _sum << '\n';

    return 0;
}