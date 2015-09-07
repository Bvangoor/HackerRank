#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string Map[n];
    for(int i=0;i<n;i++){
        cin>>Map[i];
    }
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n-2;j++){
            int temp=Map[i][j];
            if((temp>Map[i-1][j])&&(temp>Map[i+1][j])&&(temp>Map[i][j-1])&&(temp>Map[i][j+1])){
                Map[i][j]='X';
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<Map[i]<<"\n";
    return 0;
}
