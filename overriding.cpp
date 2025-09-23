#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eating Food"<<endl;
    }
};
class Dog : public Animal{
    public:
    void eat(){
        cout<<"Eating Bread"<<endl;
    }
};
int main(){
    Dog d;
    d.eat();
    d.Animal::eat();
    return 0;
}