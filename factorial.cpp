#include<iostream>
using namespace std;
int main(){
    int n;
    long fact = 1.0 ;
    cout<<"Enter Number n:";
    cin>>n;
    if(n<0){
        cout<<"Factorial Of Negative Number Not Possible"<<endl;
    }
    else{
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"Factorial Of "<<n<<" Is : "<<fact<<endl;
    return 0;
  }
}