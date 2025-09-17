#include<iostream>
using namespace std;
class Shape{
    protected:
    int a;
    int b;
    public:
    void get_data(int x,int y){
        a = x;
        b = y;
    }
};
class Rectangle : public Shape{
    public:
    int rect_area(){
      int result = a*b;
      return result;
    }
};
class Triangle : public Shape{
    public :
    float tri_area(){
        float result = 0.5*a*b;
        return result;
    }
};
int main(){
    Rectangle rect;
    Triangle tri;
    int length,breadth,height,base;
    cout<<"Enter Length Of Rectangle: " <<endl;
    cin>>length;
    cout<<"Enter Breadth Of Rectangle " <<endl;
    cin>>breadth;
    rect.get_data(length,breadth);
    cout<<"Area Of Rectangle Is:"<<rect.rect_area()<<endl;
   
    cout<<"Enter Height Of Triangle: " <<endl;
    cin>>height;
    cout<<"Enter Base Of Triangle: " <<endl;
    cin>>base;
    tri.get_data(height,base);
    cout<<"Area of Triangle Is:"<<tri.tri_area()<<endl;
    return 0;
}