#include <iostream>
using namespace std;
const double PI = 3.14;

double l(double r) {
    double len;
    len = 2 * PI * r;
    return len;
}
double s(double r) {
    double square;
    square = PI * r * r;
    return square;
}
double sec(double r, double d) {
    double sector;
    sector = PI * r * r * d / 360;
    return sector;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double r1 = 2, d1 = 60;
    double r2 = 1.73, d2 = 71;
    double r3 = 99, d3 = 157;
    cout << "Параметры окружности с радиусом " << r1 << endl;
    cout << "Длина окружности: " << l(r1) << endl;
    cout << "Площадь круга: " << s(r1) << endl;
    cout << "Площадь сектора: " << sec(r1, d1) << endl;
    cout << "------------------------------------" << endl;
    cout << "Параметры окружности с радиусом " << r2 << endl;
    cout << "Длина окружности: " << l(r2) << endl;
    cout << "Площадь круга: " << s(r2) << endl;
    cout << "Площадь сектора: " << sec(r2, d2) << endl;
    cout << "------------------------------------" << endl;
    cout << "Параметры окружности с радиусом " << r3 << endl;
    cout << "Длина окружности: " << l(r3) << endl;
    cout << "Площадь круга: " << s(r3) << endl;
    cout << "Площадь сектора: " << sec(r3, d3) << endl;
    return 0;
}
