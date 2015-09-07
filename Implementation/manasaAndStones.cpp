#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        int i=1;
        std::set<int> s;
        s.insert(0);
        while(i<n){
            std::set<int> temp;
            while(!(s.empty())){
                temp.insert((*s.begin())+a);
                temp.insert((*s.begin())+b);
                s.erase(s.begin());
            }
            s=temp;
            i++;
        }
        while(!(s.empty())){
            cout<<*s.begin()<<" ";
            s.erase(s.begin());
        }
        cout<<"\n";
    }
    
    return 0;
}
