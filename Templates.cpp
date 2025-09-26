#include<iostream>
using namespace std;
template <class P>
void fun(P a){
    cout<<"Value is: "<<a<<endl;
}
template <class P1,class P2>
void fun(P1 b,P2 c){
    cout<<"Value of P1 is: "<<b<<endl;
    cout<<"Value Of P2 is: "<<c<<endl;
}
int main(){
    fun(10);
    fun(20,"Hello");
    return 0;
}