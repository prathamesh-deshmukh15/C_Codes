#include<iostream>
using namespace std ;
class Car{
public : 
    string Brand ;
    int Speed ;
    void showDetails(){
        cout<<"Brand : "<<Brand<<endl<<"Speed : "<<Speed<<endl;
    }
};
int main(){
    Car car1;
    car1.Brand = "Tesla";
    car1.Speed = 150 ;
    car1.showDetails();
    return 0 ;
}