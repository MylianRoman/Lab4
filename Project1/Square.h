#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

class Square {
protected:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const {
        return side * side;
    }

    double perimeter() const {
        return 4 * side;
    }

    virtual void printInfo(ofstream& out) const {
        out << "Квадрат:\n";
        out << "Сторона: " << side << "\n";
        out << "Площа: " << area() << "\n";
        out << "Периметр: " << perimeter() << "\n";
    }
};

#endif // SQUARE_H
