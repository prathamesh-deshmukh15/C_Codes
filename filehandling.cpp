#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char data[100];
    ofstream filestream;
    filestream.open("Textout.txt");
    cout<<"Writing Data to Your File: "<<endl;
    cout<<"Enter Your Name: "<<endl;
    cin.getline(data,100);
    filestream<<data<<endl;
    cout<<"Enter Your Age: "<<endl;
    cin>>data;
    cin.ignore();
    filestream<<data<<endl;
    filestream.close();
    ifstream infile;
    string line;
    infile.open("Textout.txt");
    cout<<"Reading Data From Your File: "<<endl;
    while(getline(infile,line)){
        cout<<line<<endl;
    }
    infile.close();
    return 0;
}