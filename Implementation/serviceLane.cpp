#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t,i,j,k=0,min;
    cin>>n;
    cin>>t;
    int W[n];
    while(k<n){
        cin>>W[k];
        k++;
    }
    while(t--){
        cin>>i;
        cin>>j;
        min=W[i];
        for(int l=i+1;l<=j;l++){
            if(W[l]<min)
                min=W[l];
        }
        cout<<min<<"\n";
    }
    return 0;
}
