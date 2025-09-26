#include<iostream>
using namespace std;
template <class T> T add(T &a,T &b){
    T result = a+b;
    return result;
};
int main(){
    int a=10,b=20;
    cout<<"Addition Of a & b : "<<add(a,b)<<endl;
    float x=10.5,y=9.1;
    cout<<"Addition Of x & y is: "<<add(x,y)<<endl;
    return 0;
}