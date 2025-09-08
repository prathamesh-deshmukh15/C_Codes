#include <iostream>
using namespace std ;
int main(){
    int a,b,temp;
    cout<<"Enter Value Of a : ";
    cin>>a ;
    cout<<"Enter Value Of b : ";
    cin>>b ;
    
    temp = a ;
    a = b ;
    b = temp ;
    cout<<"After Swapping : " << endl ;
    cout<<"a = " << a << endl << "b = " << b << endl ;
    return 0;
}