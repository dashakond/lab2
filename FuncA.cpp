
// FuncA: обчислює суму перших n елементів ряду.
// n: кількість елементів для обчислення
#include "FuncA.h"
#include <cmath>

double FuncA::calculate(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(-1, i) * pow(1, 2 * i) / tgamma(2 * i + 1); // tgamma - гамма-функція
    }
    return sum;
}
