#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog Is Barking"<<endl;
    }
};
class Puppy : public Dog{
    public:
    void play(){
        cout<<"Puppy Is Playing"<<endl;
    }
};
int main(){
    Puppy p;
    p.eat();
    p.bark();
    p.play();
    return 0;
}