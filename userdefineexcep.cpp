#include<iostream>
#include<exception>
using namespace std;
class My_Exception : public exception{
    public:
    const char* what() const throw(){
        return "Attempt To Divide By Zero";
    }
};
int main(){
    try{
        int a,b;
        cout<<"Enter Numeratore a : "<<endl;
        cin>>a;
        cout<<"Enter Denominator b: "<<endl;
        cin>>b;
        if(b==0){
            My_Exception z;
            throw z;
        }
        else{
            cout<<"Result Is: "<<a/b<<endl;
        }
    }
    catch(exception &e){
        cout<<"Exception Caught : "<<e.what()<<endl;
    }
}