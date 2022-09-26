#include <iostream>
#include "number.h"
#include "Vector.h"

int main() {
    Number n(6);
    n = n + 6;
    Vector c(4,6);
    c.toPolar();
    std::cout << n.getValue() << " " << c.getX().getValue();
    return 0;
}
