#include <iostream>
#include <fstream>
#include "Circle.h"
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double side;

    cout << "Введіть довжину сторони квадрата: ";
    cin >> side;

    Circle circle(side / sqrt(2)); 

    ofstream outFile("shapes_info.txt");
    if (outFile.is_open()) {
        circle.printInfo(outFile);
        outFile.close();
        cout << "Інформація записана у shapes_info.txt\n";
    }
    else {
        cerr << "Не вдалося відкрити файл для запису.\n";
    }

    return 0;
}
