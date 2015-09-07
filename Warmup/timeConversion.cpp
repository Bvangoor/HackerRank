#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string time;
    cin>>time;
    int len=time.length();
    if(time.substr(len-2)=="AM"){
        if(time.substr(0,2)=="12"){
            cout<<"00"<<time.substr(2,6);
        }else{
            cout<<time.substr(0,len-2);
        }
    }else{
        if(time.substr(0,2)=="12"){
            cout<<time.substr(0,len-2);
            }else{
            int a=stoi(time.substr(0,2))+12;
            cout<<a<<time.substr(2,6);
            }
    }
    return 0;
}
