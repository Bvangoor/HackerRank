#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int array[100001]={0};
long int countArray[100001]={0};
long int candy[100001]={0};

void countit(int i,int k){
        int count1=0,j=i;
        while((i+1<=k)&&(array[i]>=array[i+1])){
            if(array[i]==array[i+1])
                i++;
            else{
                count1++;
                i++;
            }
        }
        countArray[j]=count1;
}

int max(int a, int b){
    if(a>=b)
        return a;
    return b;
}

int min(int a, int b){
    if(a<=b)
        return a;
    return b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int N;
    cin>>N;
    candy[0]=1;
    for(int i=1;i<=N;i++)
        cin>>array[i];
    for(int i=1;i<=N;){
        countit(i,N);
        int j=countArray[i];
        if (j==0){
            if((array[i]>array[i-1])&&(i!=1)){
                candy[i]=candy[i-1]+1;
                i++;
            }
            if((array[i]>array[i-1])&&(i==1)){
                candy[i]=1;
                i++;
            }
            if(array[i]==array[i-1]){
                candy[i]=1;
                i++;
            }
            if(array[i]<array[i-1]){
                candy[i]=1;
                i++;
            }
        }
        while(j>0){
            if(array[i]>array[i-1]){
                candy[i]=max(1+candy[i-1],j+1);
                j--;
                i++;
                if(j==0)
                    break;
            }
            if(array[i]==array[i-1]){
                if(j>0){
                    candy[i]=j+1;
                    i++;
                }else{
                    candy[i]=1;
                    i++;
                }
            }
            if(array[i]<array[i-1]){
                candy[i]=min(candy[i-1]-1,j+1);
                j--;
                i++;
                if(j==0)
                    break;
            }
            }
    }
    long long int sum=0;
    for (int i=1;i<=N;i++){
        sum+=candy[i];
    }
    cout<<sum;
    return 0;
}
