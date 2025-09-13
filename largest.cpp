#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Number a : ";
    cin>>a;
    cout<<"Enter Number b : ";
    cin>>b;
    cout<<"Enter Number c : ";
    cin>>c;
    if(a>=b && a>=c){
        cout<<a<<" Is The Largest number"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<b<<" Is The Largest Number"<<endl;
    }
    else{
        cout<<c<<" Is The Largest Number"<<endl;
    }
    return 0;
}