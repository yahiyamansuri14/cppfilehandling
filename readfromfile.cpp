#include<iostream>
#include<fstream>
 using namespace std;
 int main(){
    string str;
    ifstream file("file.txt");
    if(file.is_open()){
        while(getline(file,str)){
            cout<<str<<endl;
        }
        file.close();
    }else
        cout<<"File opening failed\n";
    return 0;
 }
