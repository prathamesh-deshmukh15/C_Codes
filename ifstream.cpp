#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string srg;
    ifstream filestream("textout.txt");
    if(filestream.is_open()){
        while(getline (filestream,srg)){
            cout<<srg<<endl;
        }
        filestream.close();
    }
     else{
        cout<<"File Not Opened"<<endl;
    }
    return 0;
}