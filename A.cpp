#include <iostream>

class Shape {
public:
    virtual double Surface() {
        return 1;
    }

    ~Shape() {}
};

class Circle : public Shape {
private:
    double a;

public:
    Circle(double r) {
        a = r;
    }

    double Surface()  override {
        return 3.14 * a * a;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double Surface()  override {
        return length * width;
    }
};

void print(Shape* ptr) {
    std::cout << "Area: " << ptr->Surface() << std::endl;
}

int main()
{
    int a;
    int b;
    int c;
    std::cout << "Enter the radius of Circle: ";
    std::cin >> a;
    std::cout << "Enter the Lenght of Rectangle: ";
    std::cin >> b;
    std::cout << "Enter the Wedth of Rectangle: ";
    std::cin >> c;
    Circle ob1(a);
    Rectangle ob2(b, c);
    Shape* ptr1 = &ob1;
    Shape* ptr2 = &ob2;
    print(ptr1);  
    print(ptr2);  

    return 0;
}
