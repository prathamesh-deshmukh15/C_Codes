#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    int RectangleArea(){
        return length*breadth;
    }
    void display(){
        cout<<"Length Of Rectangle Is: "<<length<<endl;
        cout<<"Breadth Of Rectangle Is: "<<breadth<<endl;
        cout<<"Area Of Rectangle Is: "<<RectangleArea()<<endl;
    }
};
int main(){
    Rectangle r(20,30);
    r.display();
    return 0;
}
