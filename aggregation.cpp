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
    Test *t1=new Test(123,"Pune","Maharashtra");
    Test *t2=new Test(124,"Bangalore","Karnataka");
    Address a1("Prathamesh",t1);
    Address a2("Aditya",t2);
    cout<<"Details Of 1st Person: "<<endl;
    a1.display();
    cout<<"\nDetails Of 2nd Person: "<<endl;
    a2.display();
    return 0;
}