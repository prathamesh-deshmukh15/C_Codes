#include<iostream>
using namespace std;
namespace College{
    namespace Department{
        void display(){
            cout<<"Welcome To CSE Department"<<endl;
        }
    }
}
namespace Tech :: Software{
    void display(){
        cout<<"Welcome To Software"<<endl;
    }
}
int main(){
    College::Department::display();
    Tech::Software::display();
    return 0;
}