#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,k,arrival;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        int count=0;
        while(n--){
            cin>>arrival;
            if(arrival<=0)
                count++;
        }
        if(count<k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
