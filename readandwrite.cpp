#include<iostream>
#include<fstream>

 using namespace std;
 int main(){
    ofstream file("file1.txt");//opening a file
    if(file.is_open()){
        file<<"This is new file\n";
        file<<"CPP tutorials\n";
        file.close();
    }else
        cout<<"File opening failed\n";
    ifstream file1("file1.txt");//opening file for reading purpose
    string str;
    if(file1.is_open()){
        while(getline(file1,str))
            cout<<str<<endl;
    file1.close();
    }else
        cout<<"File doesn't exist\n";
    return 0;
 }
