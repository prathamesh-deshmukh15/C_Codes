#include<iostream>
using namespace std;
class Vehicle{
    public:
    void speed(){
        cout<<"Speed Is 80km/hr"<<endl;
    }
};
class Car : public Vehicle{
    public:
    void speed(){
        cout<<"Speed Is 100km/hr"<<endl;
    }
};
class Bike : public Car{
    public:
    void speed(){
        cout<<"Speed Is 120km/hr"<<endl;
    }
};
int main(){
    Bike b;
    b.speed();
    Car c;
    c.speed();
    Vehicle v;
    v.speed();
    return 0;
}