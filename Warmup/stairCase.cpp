#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int j=0;
        while(j<t-1-i){
            cout<<" ";
            j++;
        }
        for(int k=0;k<=i;k++){
            cout<<"#";
        }
    cout<<"\n";
    }
    return 0;
}
