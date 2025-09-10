#include<iostream>
using namespace std;
class Box{
private :
    int length;
public :
    Box(int l):length(l){}
    Box(const Box &b){
    length = b.length;
    }
    void display(){
        cout<<"Length "<<length<<endl;
    }
};
int main(){
    Box box1(10);
    Box box2=box1;
    box1.display();
    box2.display();
    return 0;
}