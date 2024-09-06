#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    // ~Rectangle();
};

Rectangle::Rectangle() {
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l) {
    length = l;
}

void Rectangle::setBreadth(int b) {
    breadth = b;
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle::isSquare() {
    return length == breadth;
}

class cuboid : public Rectangle {
private:
    int height;
public:
    cuboid(int l, int b, int h) : Rectangle(l, b), height(h) {}
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
    int volume() { return getLength() * getBreadth() * height; }
};

int main() {
    cuboid c(10, 7, 5);
    cout << "Volume of cuboid: " << c.volume() << endl;
    return 0;
}
