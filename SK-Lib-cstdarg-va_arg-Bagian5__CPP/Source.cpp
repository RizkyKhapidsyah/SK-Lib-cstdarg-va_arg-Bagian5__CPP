#include <iostream>
#include <cstdarg>
#include <cmath>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

double stddev(int count, ...) {
    double sum = 0;
    double sum_sq = 0;
    std::va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        double num = va_arg(args, double);
        sum += num;
        sum_sq += num * num;
    }
    
    va_end(args);
    return std::sqrt(sum_sq / count - (sum / count) * (sum / count));
}

int main() {
    std::cout << stddev(4, 25.0, 27.3, 26.9, 25.7) << '\n';
    _getch();
    return 0;
}