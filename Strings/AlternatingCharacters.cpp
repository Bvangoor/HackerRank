#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, len, count;
    char last;
    string S;
    cin>>T;
    while(T--) {
        cin>>S;
        len=S.length();
        last=S[0];
        count=0;
        for(int i=1; i<len; i++) {
            if(last==S[i]) {
                count++;
            } else {
                last=S[i];
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
