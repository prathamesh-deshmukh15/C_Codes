#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void get_a(){
        cout<<"Enter Value Of a : "<<endl;
        cin>>a;
    }
};
class B:public A{
    protected:
    int b;
    public:
    void get_b(){
        cout<<"Enter Value Of b : "<<endl;
        cin>>b;
    }
};
class C{
    protected:
    int c;
    public:
    void get_c(){
        cout<<"Enter Value Of c : "<<endl;
        cin>>c;
    }
};
class D:public B,public C{
    protected:
    int d;
    public:
    void mul(){
        get_a();
        get_b();
        get_c();
        cout<<"Multiplication Of a,b,c is : "<<a*b*c<<endl;
        cin>>b;
    }
};
int main(){
    D d;
    d.mul();
    return 0;
}