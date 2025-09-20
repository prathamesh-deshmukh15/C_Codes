#include<iostream>
using namespace std;
int main(){
    int n,i,flag=0;
    cout<<"Enter Number n : "<<endl;
    cin>>n;
    if(n==0||n==1){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                cout<<n<<" Is Not A Prime Number"<<endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<n<<" Is A Prime Number"<<endl;    
    }
    return 0;
}
