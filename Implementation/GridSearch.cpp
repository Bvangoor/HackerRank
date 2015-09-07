#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,R,C,r,c;
    cin>>t;
    while(t--){
        cin>>R>>C;
        string BigMatrix[R];
        for(int i=0;i<R;i++)
            cin>>BigMatrix[i];
        cin>>r>>c;
        string smallMatrix[r];
        for(int i=0;i<r;i++)
            cin>>smallMatrix[i];
        int i=0,j=0;
        bool firstFound=false,secondFound=true;
        for(int k=0;k<R;k++){
            if(BigMatrix[k].find(smallMatrix[j])!=string::npos){
                i=k;
                firstFound=true;
            }
        }
        if(firstFound){
            i=i+1;
            j=1;
            while((i<R)&&(j<r)){
                if(BigMatrix[i].find(smallMatrix[j])!=string::npos){
                    i++;
                    j++;
                }else{
                    secondFound=false;
                    cout<<"NO\n";
                    break;
                }                    
            }
        }else{
            cout<<"NO\n";
        }
        if(secondFound&&firstFound)
            cout<<"YES\n";
    }
    return 0;
}
