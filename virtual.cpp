#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start(){
        cout<<"Vehicle Is Starting"<<endl;
    }
};
class Car : public Vehicle{
    public:
    void start(){
        cout<<"Car Is Starting"<<endl;
    }
};
class Bike : public Car{
    public:
    void start(){
        cout<<"Bike Is Starting"<<endl;
    }
};
int main(){
    Vehicle *v;
    Car c;
    Bike b;
    v=&c;
    v->start();
    v=&b;
    v->start();
    return 0;
}