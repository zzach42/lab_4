#include "righttriangle.h"

RightTriangle::RightTriangle() {}

RightTriangle::RightTriangle(double a, double b) : a_(a), b_(b) {}

RightTriangle::RightTriangle(double a) : a_(a), b_(a) {}

double RightTriangle::getA() const { return a_; }
double RightTriangle::getB() const { return b_; }

void RightTriangle::setA(double a) { a_ = a; }
void RightTriangle::setB(double b) { b_ = b; }

bool RightTriangle::isValid() const {
    return a_ > 0 && b_ > 0;
}

double RightTriangle::area() const {
    if (!isValid())
        return -1;
    return 0.5 * a_ * b_;
}

RightTriangle RightTriangle::create() {
    double a, b;
    std::cout << "Введите катет a: ";
    std::cin >> a;

    if (std::cin.fail() || a <= 0) {
        std::cout << "Ошибка ввода\n";
        return RightTriangle();
    }

    std::cout << "Введите катет b: ";
    std::cin >> b;

    if (std::cin.fail() || b <= 0) {
        std::cout << "Ошибка ввода\n";
        return RightTriangle();
    }

    RightTriangle t(a, b);
    std::cout << "Создан треугольник: " << t << std::endl;
    return t;
}

RightTriangle& RightTriangle::operator++() {
    a_ *= 2;
    b_ *= 2;
    return *this;
}

RightTriangle RightTriangle::operator++(int) {
    RightTriangle temp = *this;
    ++(*this);
    return temp;
}

RightTriangle& RightTriangle::operator--() {
    a_ /= 2;
    b_ /= 2;
    return *this;
}

RightTriangle RightTriangle::operator--(int) {
    RightTriangle temp = *this;
    --(*this);
    return temp;
}

RightTriangle::operator double() const {
    return area();
}

RightTriangle::operator bool() const {
    return isValid();
}

bool RightTriangle::operator<=(const RightTriangle& t) const {
    return this->area() <= t.area();
}

bool RightTriangle::operator>=(const RightTriangle& t) const {
    return this->area() >= t.area();
}

std::ostream& operator<<(std::ostream& os, const RightTriangle& t) {
    os << "Катеты: a = " << t.getA() << ", b = " << t.getB();
    return os;
}
