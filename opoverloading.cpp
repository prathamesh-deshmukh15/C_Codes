#include<iostream>
using namespace std;
class Fract{
    private:
        int a;
        int b;
    public:
        Fract(int x=0,int y=0){}
        void in(){
            cout<<"Enter Numerator: "<<endl; 
            cin>>a;
            cout<<"Enter Denominator: "<<endl;
            cin>>b;
    }
    Fract operator*(Fract f){
        Fract temp;
        temp.a=a*f.a;
        temp.b=b*f.b;
        return temp;
    }
    void show(){
        cout<<"Fraction is: "<<a<<"/"<<b<<endl;
    }
};
int main(){
    Fract f1,f2,f3;
    cout<<"Enter First Fraction: "<<endl;
    f1.in();
    cout<<"Enter Second Fraction: "<<endl;
    f2.in();
    f3=f2*f1;
    f3.show();
    return 0;
}
