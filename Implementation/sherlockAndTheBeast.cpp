#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n,temp,count;
    cin>>t;
    while(t--){
        cin>>n;
        bool flag=false;
        if((n%3)==0){
            for (int i=1;i<=n;i++){
                cout<<5;      
                flag=true;
            }
        }else{
            for(int i=5;i<=n;i=i+5){
                for(int j=3;i+j<=n;j=j+3){
                    if(i+j==n){
                        while(j--)
                            cout<<5;      
                        while(i--)
                            cout<<3;
                        flag=true;
                        break;
                    }
                }
                if(flag)
                    break;
            }
        }        
        if(!flag){
            if ((n%5)==0){
                for (int i=1;i<=n;i++)
                    cout<<3;
            }
            else
                cout<<-1;            
        }
        cout<<"\n";
        }
    return 0;
}


