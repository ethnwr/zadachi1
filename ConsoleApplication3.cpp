#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    
    // Задание 1
    
    /*float a = 2, b, c = 4, r;
    b = sqrt((c * c) - (a * a));
    cout << "Второй катет равен " << b;
    r = (a + b - c) / 2;
    cout << "\nРадиус вписанной окружности равен " << r;*/

    // Задание 2

    /*double x, y, z, a, b;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;
    a = (1 + (sin(x + y) * sin(x + y)) / (2 + fabs(x - (2 * x / (1 + (x * x) * (y * y))))) + x);
    b = cos(atan(1 / z)) * cos(atan(1 / z));
    cout << a << "\n";
    cout << b << "\n";*/

    // Задание 3

    int x, a, b;
    cout << "Введите x: ";
    cin >> x;
    a = x * x;
    b = x * x * x;
    cout << 1 - 2 * x + 3 * a - 4 * b << "\n";
    cout << 1 + 2 * x + 3 * a + 4 * b;
}