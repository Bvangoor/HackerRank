#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b){
    if(a>=b)
        return a;
    return b;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T,N,temp;
    cin>>T;
    while(T--){
        cin>>N;
        long long int max_end_here=0,max_so_far,non_cont[N+1];
        non_cont[0]=0;
        cin>>temp;
        non_cont[1]=(temp>0)?temp:0;
        max_end_here=temp;
        max_so_far=temp;
        int max_elem = temp;
        for(int i=2;i<=N;i++){
            cin>>temp;
            max_end_here = max(temp,max_end_here+temp);
            max_so_far = max(max_so_far,max_end_here);
            max_elem=max(max_elem,temp);
            if(temp>0)
                non_cont[i]=non_cont[i-1]+temp;
            else
                non_cont[i]=non_cont[i-1];
        }
        cout<<max_so_far<<" ";
        if (non_cont[N]==0)
            cout<<max_elem<<"\n";
        else
            cout<<non_cont[N] <<"\n";        
    }
    return 0;
}
