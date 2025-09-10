#include<iostream>
using namespace std;
class Employee{
public :
   Employee()
   {
   cout<<"Default Consturctor Invoked"<<endl;
   }
};
int main(void){
    Employee E1;
    Employee E2;
    return 0;
}