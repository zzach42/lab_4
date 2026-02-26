#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include <iostream>

class RightTriangle {
public:
    RightTriangle();
    RightTriangle(double a, double b);
    RightTriangle(double a);

    double getA() const;
    double getB() const;

    void setA(double a);
    void setB(double b);

    double area() const;
    bool isValid() const;

    RightTriangle create();

    RightTriangle& operator++();
    RightTriangle operator++(int);

    RightTriangle& operator--();
    RightTriangle operator--(int);

    explicit operator double() const;
    operator bool() const;

    bool operator<=(const RightTriangle& t) const;
    bool operator>=(const RightTriangle& t) const;

private:
    double a_ = 0;
    double b_ = 0;
};

std::ostream& operator<<(std::ostream& os, const RightTriangle& t);

#endif
