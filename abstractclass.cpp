#include<iostream>
using namespace std;
class Car{
    public:
    virtual void StartEngine()=0;
    void FuelType(){
        cout<<"Most Cars Use Petrol Or Diesel : "<<endl;
    } 
};
class BMW:public Car{
    public:
    void StartEngine(){
        cout<<"Starting Engine Of BMW"<<endl;
    }
};
class Audi:public Car{
    public:
    void StartEngine(){
        cout<<"Starting Engine Of Audi"<<endl;
    }
};
int main(){
    BMW bmwCar;
    Audi audiCar;
    Car*carPtr;
    carPtr = &bmwCar;
    carPtr->StartEngine();
    carPtr->FuelType();

    carPtr = &audiCar;
    carPtr->StartEngine();
    carPtr->FuelType();
    return 0;
}