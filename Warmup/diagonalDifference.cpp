#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,temp,sum1=0,sum2=0;
    cin>>t;
    int A[t][t];
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            cin>>A[i][j];
            if(i==j)
                sum1+=A[i][j];
            if((i+j)==t-1)
                sum2+=A[i][j];
        }
    }
    cout<<abs(sum1-sum2);
    return 0;
}


