#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m,div;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        div=n/c;
        answer=div;
        while(div>=m){
            int rem=div%m;
            answer+=(div/m);
            div=(div/m)+rem;
        }
        cout<<answer<<endl;
    }
    return 0;
}
