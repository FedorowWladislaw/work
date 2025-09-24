#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); 

    int n;
    cout << "Введите количество точек: ";
    cin >> n;

    Point* points = new Point[n];

    for (int i = 0; i < n; i++) {
        cout << "Точка " << i + 1 << ":" << endl;
        points[i].input();
    }

    cout << "Введенные точки:" << endl;
    for (int i = 0; i < n; i++) {
        points[i].output();
        cout << endl;
    }

    findIntersectingPoints(points, n);

    delete[] points; 
    return 0;
}