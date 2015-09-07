#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int j,k,t,i=0,temp=0;
    cin>>t;
    char c,A[t];
    while(i<t){
        cin>>c;
        A[i]=c;
        i++;
    }
    cin>>k;
    k=k%26;
    for (int i=0;i<t;i++){
        j=(int)A[i];
        if(((j>=65)&&(j<=90))||((j>=97)&&(j<=122))){
            temp=j+k;
            if(j<=90){                
                while(temp>90){
                    temp=temp-26;
                }
                A[i]=temp;
            }if(j<=122){
                while(temp>122){
                    temp=temp-26;
                }
                A[i]=temp;
            }
        }else{
            A[i]=j;
        }
    }
    A[t]='\0';
    cout<<(string)A;
    return 0;
}
