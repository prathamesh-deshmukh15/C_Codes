#include<iostream>
using namespace std;
class Vehicle{
public:
    string Brand,Model;
    int Year;
    float Speed;

    Vehicle(){
        Brand = "Toyota";
        Model = "Fortuner";
        Year = 2020;
        Speed = 150;
    }
};
int main(){
    Vehicle My_Car;
    cout<<"Brand : "<<My_Car.Brand<<endl;
    cout<<"Model : "<<My_Car.Model<<endl;
    cout<<"Year : "<<My_Car.Year<<endl;
    cout<<"Speed : "<<My_Car.Speed<<" km/hr"<<endl;
}