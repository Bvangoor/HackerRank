#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int returnLowest(long long int a,long long int b,long long int c){
    if((a<=b)&&(a<=c))
        return a;
    if((b<=a)&&(b<=c))
        return b;
    return c;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T,B,W,X,Y,Z;
    cin>>T;
    while(T--){
        cin>>B>>W>>X>>Y>>Z;
        cout<<returnLowest(B*X+W*Y, (B+W)*X + W*Z, (B+W)*Y + B*Z)<<"\n";
    }
    return 0;
}
