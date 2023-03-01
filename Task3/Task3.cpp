// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

enum OldCars {one = 1, two , three, four , five = 0};
OldCars operator+(const OldCars& g, const int& c)
{
    OldCars j = OldCars(c + g);
    return (j = OldCars(j % 5));
}

OldCars operator+(const int& c, const OldCars& g)
{
    return(g + c);
}

OldCars operator++(OldCars& g)
{
    return (g = OldCars(g + 2));
}

OldCars operator++(OldCars& g, int)
{
    OldCars j = g; g = OldCars(g + 2);
    return j;
}

void print(const OldCars& d)
{
    string Model[5] =
    {
        "ЗИС-101", "РАФ-10", "ГАЗ-13", "ГАЗ-М-20 «Победа»", "ГАЗ-14"
    };
    cout << Model[d] << endl;
}
int main()
{
    setlocale(LC_ALL, "Rus");


    OldCars g = four;
    print(g + 2);
    print(3 + g);
    print(operator+(g,2));
    print(operator+(3,g));
    g++;
    print(g);
    print(++g);
    print(operator++(g));
    print(operator++(g, 1));
    print(g);

    system("pause");
}