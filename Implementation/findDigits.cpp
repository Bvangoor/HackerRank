#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    unsigned long long int n,rem,div;
    cin>>t;
    while(t--){
        cin>>n;
        long int count=0;
        div=n;
        while(div){
            rem=div%10;
            if((rem!=0)&&(n%rem==0))
                count++;
            div=div/10;
        }
        cout<<count<<"\n";
    }    
    return 0;
}
