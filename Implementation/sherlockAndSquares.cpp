#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    unsigned long long int n1,n2,count=0,temp;
    cin>>t;
    while(t--){
        cin>>n1;
        cin>>n2;
        count=0;
        temp=0;
        while(n1<=n2){
            temp=floor(sqrt(n1));
            if ((temp*temp)==n1){
                count++;
                n1=(temp+1)*(temp+1);
            }else{
            n1++;
            }
        }
        cout<<count<<"\n";
    }
    
    return 0;
}
