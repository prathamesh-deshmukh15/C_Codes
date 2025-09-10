#include<iostream>
using namespace std;
class Employee{
public :
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s){
        id=i;
        name=n;
        salary=s;
    }
    void show(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(void){
Employee emp1=Employee(201,"John",15000);
Employee emp2=Employee(202,"Alice",20000);
emp1.show();
emp2.show();
return 0;
}