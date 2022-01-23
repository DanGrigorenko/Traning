#include <iostream>
#include <time.h>
using namespace std;


class Triangle {
protected:
    int x1, y1, x2, y2, x3, y3;
public:  
    Triangle() {}

    Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
        SetX1(x1);
        SetY1(y1);
        SetX2(x2);
        SetY2(y2);
        SetX3(x3);
        SetY3(y3);
    }   

    Triangle(const Triangle &obj) {
        this->x1= obj.x1;
        this->y1= obj.y1;

        this->x2 = obj.x2;
        this->y2= obj.y2;

        this->x3 = obj.x3;
        this->y3= obj.y3;
    }  

    void SetX1(int value) {
        x1 = value;
    } 
    void SetY1(int value2) {
        y1 = value2;
    } 

    void SetX2(int value3) {
        x2 = value3;
    } 
    void SetY2(int value4) {
        y2 = value4;
    } 

    void SetX3(int value5) {
        x3 = value5;
    } 
    void SetY3(int value6) {
        y3 = value6;
    } 

    int GetX1() {
        return x1;
    }
    int GetY1() {
        return y1;
    }

    int GetX2() {
        return x2;
    }
    int GetY2() {
        return y2;
    }

    int GetX3() {
        return x3;
    }
    int GetY3() {
        return y3;
    }

};

class Point{
private: 
    int x, y;
public:
    Point() {}

    Point(int x, int y) {
        SetX(x);
        SetY(y);
    }

    void Show() {
        cout << "(" << x << "," << y << ")" << " ";
    }

    int SetX(int value) {
        x = value;
        return x;
    }
    int SetY(int value1) {
        y = value1;
        return y;
    }

    int GetX() {
        return x;
    }
    int GetY() {
        return y;
    }
};

void Foo(Triangle a, Point* b) {
    int res1, res2, res3;
    res1 = (a.GetX1() - (*b).GetX()) * (a.GetY2() - a.GetY1()) - (a.GetX2() - a.GetX1()) * (a.GetY1() - (*b).GetY());
    res2 = (a.GetX2() - (*b).GetX()) * (a.GetY3() - a.GetY2()) - (a.GetX3() - a.GetX2()) * (a.GetY2() - (*b).GetY());
    res3 = (a.GetX3() - (*b).GetX()) * (a.GetY1() - a.GetY3()) - (a.GetX1() - a.GetX3()) * (a.GetY3() - (*b).GetY());

    
    if ((res1 > 0 && res2 > 0 && res3 > 0) || (res1 < 0 && res2 < 0 && res3 < 0))
    {
       cout << "Точка внутри треугольника" << endl;
    }
    else if (res1 == 0 || res2 == 0 || res3 == 0)
    {
        cout << "Точка на стороне треугольника" << endl;
    }
    else
    {
        cout << "Точка в ебенях нахуй, долбоёба кусок скинься нахуя и не запускай эту хуете блять!!!" << endl;
    }
}

int main() 
{
    int x1, y1, x2, y2, x3, y3;
    Triangle p2;

    p2.SetX1(9);
    p2.SetY1(7);
    p2.SetX2(11);
    p2.SetY2(0);
    p2.SetX3(2);
    p2.SetY3(2);  

    int n;
    int x, y;
    cout << "Enter n = ";
    cin >> n;
    Point** p = new Point*[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите координаты: \n";
        cin >> x;
        cin >> y;
        p[i] = new Point(x, y);
        Foo(p2, p[i]);
    }

    return 0;
   
}