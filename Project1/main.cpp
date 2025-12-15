#include <iostream>
#include <fstream>
#include "Circle.h"
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double side;

    cout << "Enter the length of the side of the square: ";
    cin >> side;

    Circle circle(side / sqrt(2)); 

    ofstream outFile("shapes_info.txt");
    if (outFile.is_open()) {
        circle.printInfo(outFile);
        outFile.close();
        cout << "Information saved in shapes_info.txt\n";
    }
    else {
        cerr << "Could not open file for writing.\n";
    }

    return 0;
}
