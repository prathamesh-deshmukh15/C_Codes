#include<iostream>
using namespace std;
int main(){
    try{
        int a,b;
        cout<<"Enter Numerator a : "<<endl;
        cin>>a;
        cout<<"Enter Denominator b : "<<endl;
        cin>>b;
        if(b==0){
            throw"Cannot Divide By Zero";
        }
        int result = a/b ;
        cout<<"Result Is : "<<result<<endl;
    }
    catch(const char* msg){
        cout<<"Exception Caught : "<<msg<<endl;
    }
    return 0;
}