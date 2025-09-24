#include<iostream>
using namespace std;
class Shape{
    public:
    virtual double getArea() const=0;
    virtual double getPerimeter() const=0;
};
class Square : public Shape{
    private:
    double side;
    public:
    Square(double s):side(s){}
    double getArea() const override {
        return side*side;
    }
    double getPerimeter() const override{
        return 4*side;
    }
};
class Circle : public Shape{
    private:
    double radius;
    public:
    Circle(double r) : radius(r){}
        double getArea() const override{
            return 3.14*radius*radius;
    }
    double getPerimeter() const override{
        return 2*3.14*radius;
    }
};
int main(){
    Square sq(5.00);
    Circle cir(3.00);
    cout<<"Square Area: "<<sq.getArea()<<endl;
    cout<<"Square Perimeter: "<<sq.getPerimeter()<<endl;
    cout<<"Circle Area: "<<cir.getArea()<<endl;
    cout<<"Circle Perimeter: "<<cir.getPerimeter()<<endl;
    return 0;
}