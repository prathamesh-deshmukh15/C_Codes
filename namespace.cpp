#include<iostream>
using namespace std;
namespace First{
    void SayHello(){
        cout<<"Hello From First Namespace"<<endl;
    }
}
namespace Second{
    void SayHello(){
        cout<<"Hello From Second Namespace"<<endl;
    }
}
int main(){
    First::SayHello();
    Second::SayHello();
    return 0;
}