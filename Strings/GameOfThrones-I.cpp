#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
   
    string S;
    cin>>S;
    unordered_map<char, int> dict;
    int len=0;
    len=S.length();
    for (int i=0;i<len;i++) {
        if(dict.count(S[i])) {
            dict.erase(S[i]);
        } else {
            dict[S[i]]=1;
        }
    }
    if(dict.size()==0 || dict.size()==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}


