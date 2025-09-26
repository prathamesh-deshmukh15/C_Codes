#include<iostream>
using namespace std;
int value=10;
namespace First{
    int value=20;
    void display(){
        cout<<"Local Namespace Value: "<<value<<endl;
        cout<<"Global Namespace Value: "<<::value<<endl;
    }
}
using namespace First;
int main(){
    display();
    return 0;
}