#include "Vector.h"

Vector::Vector() {
    vec = {0, 0};
}

Vector::Vector(Number x, Number y) {
    vec = {x, y};
}

Vector::Vector(const Vector &v) {
    vec.first = v.getX();
    vec.second = v.getY();
}

std::pair<Number, Number> Vector::getValue() const {
    return vec;
}

Number Vector::getX() const {
    return vec.first;
}

Number Vector::getY() const {
    return vec.second;
}

void Vector::Add(const Vector &v) {
    vec.first = vec.first + v.getValue().first;
    vec.second = vec.second + v.getValue().second;
}

void Vector::toPolar() {
    vec = {sqrt((vec.first * vec.first + vec.second * vec.second).getValue()),
           atan((vec.second / vec.first).getValue())};
}

const Vector operator+(const Vector &l, const Vector &r) {
    return Vector(l.getValue().first + r.getValue().first, l.getValue().second + r.getValue().second);
}

Vector Vector::OneVec = Vector({1, 1});

Vector Vector::ZeroVec = Vector({0, 0});
