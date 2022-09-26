#ifndef VECTORLIB_VECTOR_H
#define VECTORLIB_VECTOR_H

#include "number.h"
#include <utility>
#include <cmath>

class Vector {
public:
    static Vector ZeroVec;

    static Vector OneVec;

    Vector();

    Vector(Number x, Number y);

    Vector(const Vector &v);

    std::pair<Number, Number> getValue() const;

    Number getX() const;

    Number getY() const;

    void Add(const Vector &v);

    friend const Vector operator+(const Vector &l, const Vector &r);

    void toPolar();

private:
    std::pair<Number, Number> vec;

};


#endif //VECTORLIB_VECTOR_H
