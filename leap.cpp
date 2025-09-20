#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter A Year: "<<endl;
    cin>>year;
    if(year%400==0){
        cout<<year<<" "<<"Is A Leap Year"<<endl;
    }
    else if(year%100==0){
        cout<<year<<" "<<"Is Not A Leap Year"<<endl;
    }
    else if(year%4==0){
        cout<<year<<" "<<"Is A Leap Year"<<endl;
    }
    else {
        cout<<year<<" "<<"Is Not A Leap Year"<<endl;
    }
    return 0;
}