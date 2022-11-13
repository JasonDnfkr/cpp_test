#include <iostream>
using namespace std;

class Shape {
protected:
    int x;

    void change_x() { x = 4; }

public:
    void Draw() { cout << "Base::Draw()" << endl; }
    void Erase() { cout << "Base::Erase()" << endl; }
    Shape() { Draw(); }
    Shape(int a) { cout << "Shape: a = " << a << endl; }
    ~Shape() { Erase(); }
};
//-------------------------------------------------
class Polygon : public Shape {
public:
    Polygon() { Draw(); }
    Polygon(int a) {
        change_x();
        cout << "Polygon a = " << a << endl;
        cout << x << endl;
    }
    void Draw() { cout << "Polygon::Draw()" << endl; }
    void Erase() { cout << "Polygon Erase()" << endl; }
    ~Polygon() { Erase(); }
};
//--------------------------------------------------
class Rectangle : public Polygon {
public:
    Rectangle() { Draw(); }
    void Draw() { cout << "Rectangle::Draw()" << endl; }
    void Erase() { cout << "Rectangle Erase()" << endl; }
    ~Rectangle() { Erase(); }
};
//--------------------------------------------------
class Square : public Rectangle {
public:
    Square() { Draw(); }
    void Draw() { cout << "Square::Draw()" << endl; }
    void Erase() { cout << "Square Erase()" << endl; }
    ~Square() { Erase(); }
};
//--------------------------------------------------
int main() {
    Polygon c(4);
    // Rectangle s;
    // Square t;
    cout << "------------------------------------------" << endl;
    return 0;
}