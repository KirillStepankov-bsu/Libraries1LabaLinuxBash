#include "number.h"

Number Number::ZeroNum = 0;

Number Number::OneNum = 1;

Number::Number() {
    num = 0;
}

Number::Number(double n) {
    num = n;
}

double Number::getValue() const {
    return num;
}

void Number::Add(const Number &add) {
    num += add.getValue();
}

void Number::Multiply(const Number &mul) {
    num *= mul.getValue();
}

void Number::Substract(const Number &sub) {
    num -= sub.getValue();
}

void Number::Divide(const Number &div) {
    num /= div.getValue();
}

const Number operator+(const Number &x, const Number &y) {
    return Number(x.getValue() + y.getValue());
}

const Number operator*(const Number &x, const Number &y) {
    return Number(x.getValue() * y.getValue());
}

const Number operator/(const Number &x, const Number &y) {
    return Number(x.getValue() / y.getValue());
}

const Number operator-(const Number &x, const Number &y) {
    return Number(x.getValue() - y.getValue());
}