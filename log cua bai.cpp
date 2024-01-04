#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
int main() {
    double y,x;
    std::cin >> x>>y ;  
    double result = log10(x)/log10(y);
    std::cout << "log cua " << y << " la " << result << std::endl;
    return 0;
}
