#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <fstream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include "Square.h"
#include <windows.h>

using namespace std;

class Circle : public Square {
public:
    Circle(double side) : Square(side* sqrt(2)) {}

    double area() const {
        return M_PI * (side / sqrt(2) / 2) * (side / sqrt(2) / 2); 
    }

    double circumference() const {
        return 2 * M_PI * (side / sqrt(2) / 2); 
    }

    void printInfo(ofstream& out){
        Square::printInfo(out); 
        out << "Circle^\n";
        out << "Radius: " << side / sqrt(2) / 2 << "\n"; 
        out << "Square: " << area() << "\n";
        out << "Length of circle: " << circumference() << "\n";
    }
};

#endif // CIRCLE_H
