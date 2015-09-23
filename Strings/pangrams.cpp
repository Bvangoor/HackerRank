#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<char, int> dict;
    map<char, int>::iterator it;
    for (int i=97;i<=122;i++)
        dict[i]=0;
    string S;
    getline(cin,S);
    int len=S.length();
    for (int i=0;i<len;i++) {
        if(S[i]!=' ')
            dict[tolower(S[i])]=1;
    }
    for(it=dict.begin();it!=dict.end();it++) {
        if(it->second==0) {
            cout<<"not pangram\n";
            return 0;
        }
    }
    cout<<"pangram\n";
    return 0;
}
