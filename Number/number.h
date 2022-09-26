#ifndef NUMBERSLIB_NUMBER_H
#define NUMBERSLIB_NUMBER_H


class Number {
public:
    static Number ZeroNum;

    static Number OneNum;

    Number();

    Number(double n);

    double getValue() const;

    void Add(const Number &add);

    void Multiply(const Number &mul);

    void Substract(const Number &sub);

    void Divide(const Number &div);

    friend const Number operator+(const Number &x, const Number &y);

    friend const Number operator*(const Number &x, const Number &y);

    friend const Number operator/(const Number &x, const Number &y);

    friend const Number operator-(const Number &x, const Number &y);


private:
    double num;
};


#endif //NUMBERSLIB_NUMBER_H
