// Lab_02.1cpp
// < Зробок Іван>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 0.9
//Z1=(cos α-cos β)2-(sin α-sin β)2;
//Z2=-4sin2(α-β)/2 * cos(α+β).

#include <iostream>
using namespace std;
int main()
{
    double a;//вхідний параметр
    double b;//вхідний параметр
    double z1; //результат обчислення 1 - го виразу
    double z2;// результат обчислення 1-го виразу

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    z1 = (cos(a) - cos(b)) * (cos(a) - cos(b)) - (sin(a) - sin(b)) * (sin(a) - sin(b));
    z2 = -4 * sin((a - b) / 2) * sin((a - b) / 2) * cos(a + b);

    cout << endl;
    cout << "z1 =" << z1 << endl;
    cout << "z2 =" << z2 << endl;


    cin.get();
    return 0;

}

