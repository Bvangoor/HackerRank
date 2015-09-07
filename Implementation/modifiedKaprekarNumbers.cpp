#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digitCount(long long int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}

bool KaprekarNumber(long long int n){
    int digCount=digitCount(n);
    long long int n1 = n * n;
    int digCount2=digitCount(n1);
//    cout<<"digCount : "<<digCount<<" digCount2 : "<<digCount2<<"\n";
    if(digCount==digCount2){
        if(n==n1)
            return true;
        else
            return false;
    }        
    int DigArray[digCount2],i=1,t=digCount2;
    while(n1>0){
        DigArray[t-1]=n1%10;
        n1/=10;
        t--;
    }
 //   for(int k=0;k<digCount2;k++)
//        cout<<" "<<DigArray[k];
//    cout<<"\n";
    long long int number1=0,number2=0;
    while(i<=digCount){
        number2+=DigArray[((digCount2-1)-digCount)+i]*pow(10,digCount-i);
        i++;
    }   
    i=0;
    while(i<=((digCount2-1)-digCount)){
        number1+=DigArray[i]*pow(10,((digCount2-1)-digCount)-i);
        i++;
    }
//    cout<<"number1 : "<<number1<<" number2 : "<<number2<<"\n";
    if(number1+number2 == n)
        return true;
    else
        return false;
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int p,q;
    bool invalid=true;
    cin>>p>>q;
    for (long long int i=p;i<=q;i++){
//        cout<<"i : "<<i<<"\n";
        if(KaprekarNumber(i)){
            invalid=false;
            cout<<i<<" ";
        }
    }
    if(invalid)
        cout<<"INVALID RANGE";
    return 0;
}
