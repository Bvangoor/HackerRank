#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, count=0, temp, len;
    cin>>N;
    temp=N;
    string S;
    unordered_map<char, int> Map;
    unordered_map<char, int> tempMap;
    unordered_map<char, int>::iterator it;
    while(N--) {
        cin>>S;
        len=S.length();
        for (int i=0;i<len;i++) {
            if(tempMap.count(S[i])) {
                //DO NOTHING
            } else {
                tempMap[S[i]]=1;
            }
        }
        for(it=tempMap.begin();it!=tempMap.end();it++) {
            if(Map.count(it->first)) {
                Map[it->first]=Map[it->first] + (it->second);
                if(N==0) {
                    if(Map[it->first]==temp)
                        count++;
                }
            }
            else
                Map[it->first]=it->second;
        }            
        tempMap.clear();
    }
    cout<<count;
    return 0;
}
