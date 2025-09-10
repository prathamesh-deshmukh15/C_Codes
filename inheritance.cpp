#include<iostream>
using namespace std ;
class Vehicle{
protected:
    string Brand ;
public : 
    Vehicle(string b):Brand(b){}
    void ShowBrand() const{cout<<"Brand : "<<Brand<<endl;}
};
class Car : public Vehicle{
private:
    int Speed ;
public :
    Car(string b,int s):Vehicle(b),Speed(s){}
    void ShowDetails() const{
    ShowBrand();
       cout<<"Speed : "<<Speed<<" km/hr"<<endl;
    }
};
int main(){
    Car myCar("Maruti",150);
    myCar.ShowDetails();
    return 0;
}