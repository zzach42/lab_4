#include "righttriangle.h"

int main() {
    RightTriangle t1;
    RightTriangle t2(3, 4);
    RightTriangle t3(5);

    std::cout << "t2: " << t2 << std::endl;
    std::cout << "Площадь t2: " << t2.area() << std::endl;

    std::cout << "\nСоздание треугольника с клавиатуры:\n";
    RightTriangle t4 = t4.create();

    std::cout << "\n++t2: " << ++t2 << std::endl;
    std::cout << "t2++: " << t2++ << std::endl;

    std::cout << "\n--t2: " << --t2 << std::endl;
    std::cout << "t2--: " << t2-- << std::endl;

    std::cout << "\nЯвное приведение к double (площадь): "
        << (double)t2 << std::endl;

    bool exists = t2;
    std::cout << "Неявное приведение к bool (существует?): "
        << (exists ? "true" : "false") << std::endl;

    std::cout << "\nСравнение площадей:\n";
    if (t2 >= t3)
        std::cout << "t2 >= t3\n";
    else
        std::cout << "t2 < t3\n";

    return 0;
}
