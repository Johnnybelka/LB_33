#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include <math.h>

using namespace std;
void Child::input()
{
    cout << "Введите имя" << endl;
    cin >> name;
    cout << "Введите фамилию" << endl;
    cin >> surname;
    cout << "Введите возраст" << endl;
    cin >> age;
}
void Child::output()
{
    cout << "Имя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
}

void Tiles::getData()
{
    cout << "Фирма кафеля: " << brand << endl;
    cout << "Высота кафеля: " << size_h << endl;
    cout << "Ширина кафеля: " << size_w << endl;
    cout << "Цена кафеля: " << price << endl;
}


void Complex::input()
{
    cout << "Введите целую часть: ";
    cin >> re;
    cout << "Введите мнимую часть: ";
    cin >> im;
}
void Complex::abs()
{
    float a = sqrt(re * re + im * im);
    cout << "Модуль: " << a << endl;
}
void Complex::output()
{
    cout << "Целая часть: " << re << endl;
    cout << "Мнимая часть: " << im << endl;
}

void Vector::input()
{
    cout << "Введите координату х: ";
    cin >> x;
    cout << "Введите координату у: ";
    cin >> y;
}
void Vector::output()
{
    cout << "Координата х: " << x << endl;
    cout << "Координата у: " << y << endl;
}
void Vector::abs()
{
    float a = sqrt(x * x + y * y);
    cout << "Модуль вектора: " << a;
}
void Vector::sum(Vector v1, Vector v2)
{
    x = v1.x + v2.x;
    y = v1.y + v2.y;
    cout << "Сумма векторов: " << endl;
    output();
}
void Vector::dif(Vector v1, Vector v2)
{
    x = v1.x - v2.x;
    y = v1.y - v2.y;
    cout << "Разность векторов: " << endl;
    output();
}