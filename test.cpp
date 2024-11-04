#include "FuncA.h"
#include <cassert>

int main() {
    FuncA func;
    assert(func.calculate(1) == 1.0);
    assert(func.calculate(2) == 0.333333);
    assert(func.calculate(3) == 0.2);
    return 0;
}
