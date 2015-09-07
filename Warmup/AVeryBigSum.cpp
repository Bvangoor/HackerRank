#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i=1;
    long int num;
    long long int sum=0;
    cin>>t;
    while(i<=t){
        cin>>num;
        sum+=num;
        i++;
    }
    cout<<sum;
    return 0;
}
