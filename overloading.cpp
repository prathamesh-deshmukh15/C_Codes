#include<iostream>
using namespace std;
void printInfo(int age){
    cout<<"Age Is: "<<age<<endl;
    return;
}
void printInfo(string name){
    cout<<"Name Is: "<<name<<endl;
    return;
}
void printInfo(string name,int age){\
    cout<<"Name & Age Is: "<<name<<" & "<<age<<endl;
    return ;
}
int main(){
    printInfo(20);
    printInfo("Prathamesh");
    printInfo("Prathamesh",20);
    return 0;
}