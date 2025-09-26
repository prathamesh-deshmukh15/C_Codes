#include<iostream>
using namespace std;
void fun(int a){
    cout<<"Value Of a Is: "<<a<<endl;
}
void fun(int b){
    if(b%2==0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }
}
int main(){
    fun(10);
    fun(15);
    return 0;
}