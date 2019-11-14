#include<iostream>
#include<fstream>
 using namespace std;
 int main(){
    ofstream file("file.txt");
    if(file.is_open()){
        file<<"Hello\n";
        file<<"This is first java program\n";
        file.close();
    }
    else
        cout<<"File opening failed\n";
    return 0;
 }
