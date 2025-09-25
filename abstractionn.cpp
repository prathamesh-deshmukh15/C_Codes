#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;
};
class Rectangle : Shape
{
    public:
    void draw(){
        cout<<"Drawing Rectangle"<<endl;
    }
};
class Circle : Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};
int main(){
    Rectangle r;
    Circle c;
    r.draw();
    c.draw();
    return 0;
}