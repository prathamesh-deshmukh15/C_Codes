#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream filestream("textout.txt");
    if(filestream.is_open()){
        filestream<<"My Name Is Prathamesh"<<endl;
        filestream<<"I Am Learning Cpp"<<endl;
        filestream.close();
    }
     else{
        cout<<"File Not Opened"<<endl;
    }
    return 0;
}