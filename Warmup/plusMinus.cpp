#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,temp;
    double d1,d2,d3,count1=0,count2=0,count3=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>temp;
        if(temp>0){
            count1++;
        }
        if(temp<0){
            count2++;
        }
        if(temp==0){
            count3++;
        }            
    }
    d1=count1/t;
    d2=count2/t;
    d3=count3/t;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout<<d1<<endl;
    std::cout<<d2<<endl;
    std::cout<<d3<<endl;
    return 0;
}
