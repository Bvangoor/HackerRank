#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string message;
    cin>>message;
    int rows,columns,len;
    len=message.length();
    rows=floor(sqrt(len));
    columns=ceil(sqrt(len));
    for(int i=0;i<columns;i++){
        int j=i;
        while(j<len){
            cout<<message[j];
            j=j+columns;
        }
        cout<<" ";
    }
    return 0;
}
