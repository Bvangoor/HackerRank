#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,count=0;
    cin>>t;
    vector<int> A;
    while(t--){
        cin>>n;
        A.push_back(n);
    }
    sort(A.begin(),A.end());
    while(A.size()!=0){
        cout<<A.size()<<"\n";
        vector<int> temp;
        n=A[0];
        for(int i=0;i<A.size();i++){
            A[i]=A[i]-n;
            if(A[i]!=0)
                temp.push_back(A[i]);
        }
        A=temp;
    }
    return 0;
}
