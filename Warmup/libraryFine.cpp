#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int day1,day2,month1,month2,year1,year2;
    cin>>day1>>month1>>year1>>day2>>month2>>year2;
    if(year1!=year2){
        if(year1<year2)
            cout<<0;
        else
            cout<<10000;
        return 0;
    }
    if(month1==month2){
        if(day1<day2)
            cout<<0;
        else
            cout<<15*(day1-day2);
    }else{
        if(month1<month2)
            cout<<0;
        else
            cout<<500*(month1-month2);
    }
    return 0;
}
