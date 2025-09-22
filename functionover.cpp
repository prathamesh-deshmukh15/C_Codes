#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,double b,int c){
    return a+b+c;
}
float sum(float a,float b){
    return a+b;
}
int main(){
    cout<<sum(10,20)<<endl;
    cout<<sum(20,50.51,10)<<endl;
    cout<<sum(10.4f,9.5f)<<endl;
    return 0;
}