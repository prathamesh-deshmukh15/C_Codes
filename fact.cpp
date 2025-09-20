#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter Number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial Of "<<n<<" Is: "<<fact<<endl;
    return 0;
}