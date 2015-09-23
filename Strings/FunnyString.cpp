#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, len;
    cin>>T;
    string S;
    while(T--) {
        cin>>S;
        len=S.length();
        bool funny=true;
        for (int i=1; i<len; i++) {
            if(abs(S[i]-S[i-1])!=abs(S[len-i]-S[len-i-1])) {
                funny=false;
                cout<<"Not Funny\n";
                break;
            }
        }
        if(funny)
            cout<<"Funny\n";        
    }
    return 0;
}
