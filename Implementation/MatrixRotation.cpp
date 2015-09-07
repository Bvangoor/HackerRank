#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numofRounds(int a,int b){
    if(a<=b)
        return a/2;
    return b/2;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int M,N;
    long long int R,temp;
    cin>>M>>N>>R;
    long long int NumArray[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>temp;
            NumArray[i][j]=temp;
        }
      }
    int i=0,j=0,k=0,m=M-1,n=N-1,l=1,rounds;
    long long int r=R;
    rounds=numofRounds(M,N);
while(l<=rounds){
    vector<long long int> temp1,temp2;
    int i1=i,j1=j,k1=k,m1=m,n1=n,iterator=0;
    long long int r1;
    for(i=i;i<=m;i++)
        temp1.push_back(NumArray[i][j]);
    i=i-1;
    for(j=j+1;j<=n;j++)
        temp1.push_back(NumArray[i][j]);
    j=j-1;
    for(i=i-1;i>=k;i--)
        temp1.push_back(NumArray[i][j]);
    i=i+1;
    for(j=j-1;j>=(k+1);j--)
        temp1.push_back(NumArray[i][j]);
    int t=temp1.size(),pos;
    r1=r%t;
    pos=t-r1;
    if(r1!=0){
    temp2.push_back(temp1[pos]);
    for(int i=pos+1;i<t;i++)
        temp2.push_back(temp1[i]);
    for(int i=0;i<pos;i++)
        temp2.push_back(temp1[i]);
    for(i1=i1;i1<=m1;i1++){
        NumArray[i1][j1]=temp2[iterator];
        iterator++;
    }
    i1=i1-1;
    for(j1=j1+1;j1<=n1;j1++){
        NumArray[i1][j1]=temp2[iterator];
        iterator++;
    }
    j1=j1-1;
    for(i1=i1-1;i1>=k1;i1--){
        NumArray[i1][j1]=temp2[iterator];
        iterator++;
    }
    i1=i1+1;
    for(j1=j1-1;j1>=(k1+1);j1--){
        NumArray[i1][j1]=temp2[iterator];
        iterator++;
    }
    }
    i++;
    j++;
    k++;
    m--;
    n--;
    l++;
}
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)
            cout<<NumArray[i][j]<<" ";
    cout<<"\n";
    }
    return 0;
}
