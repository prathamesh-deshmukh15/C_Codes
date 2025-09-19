#include<iostream>
using namespace std;
class Test{
    public:
    int H_No;
    string City,State;
    Test(int H_no,string City,string State){
        this->H_No=H_no;
        this->City=City;
        this->State=State;
    }
};
class Address{
    private:
    Test* Addr;
    public:
    string name;
    Address(string name,Test* Addr){
        this->name=name;
        this->Addr=Addr;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"House No: "<<Addr->H_No<<endl;
        cout<<"City: "<<Addr->City<<endl;
        cout<<"State: "<<Addr->State<<endl;
    }
};
int main(){
    Test *t1=new Test(123,"New York","NY");
    Address a1("John",t1);
    a1.display();
    return 0;
}