#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int stringOr(string s, string t, int n){
    int count1=0;
    for(int i=0;i<n;i++){
        if((s[i]=='1')||(t[i]=='1'))
            count1++;
    }
    return count1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,max=-1;
    cin>>n>>m;
    string Map[n];
    unordered_map<int,int> count;
    for(int i=0;i<n;i++)
        cin>>Map[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=stringOr(Map[i],Map[j],m);
            if(max<=temp){                
                max=temp;
                if(count.count(max))
                    count[max]++;
                else
                    count[max]=1;
            }
        }
    }
    cout<<max<<"\n";
    cout<<count[max];
    return 0;
}
