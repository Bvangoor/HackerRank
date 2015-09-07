#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,M,t,temp;
    vector<int> coins;
    cin>>N>>M;
    t=M;
    while(t--){
        cin>>temp;
        coins.push_back(temp);
    }
    std::sort(coins.begin(),coins.end());
    long long int dpArray[N+1][M],val_incl,val_excl;
    for(int i=0;i<M;i++)
        dpArray[0][i]=1;
    for(int i=1;i<=N;i++){
        for(int x=0;x<M;x++){
            if((i-coins[x])>=0)
                val_incl=dpArray[i-coins[x]][x];
            else
                val_incl=0;
            if(x>=1)
                val_excl=dpArray[i][x-1];
            else
                val_excl=0;
            dpArray[i][x]=val_incl+val_excl;
        }
    }
    cout<<dpArray[N][M-1];
    return 0;
}
