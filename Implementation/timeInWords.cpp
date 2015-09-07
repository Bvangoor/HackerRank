#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int H,M;
    cin>>H>>M;
    unordered_map<int,string> MinuteMap,HourMap;
    HourMap={{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"},{10,"ten"},{11,"eleven"},{12,"twelve"}};
    MinuteMap={{1,"one minute"},{2,"two minutes"},{3,"three minutes"},{4,"four minutes"},{5,"five minutes"},{6,"six minutes"},{7,"seven minutes"},{8,"eight minutes"},{9,"nine minutes"},{10,"ten minutes"},{11,"eleven minutes"},{12,"twelve minutes"},{00,"o' clock"},{13,"thirteen minutes"},{14,"fourteen minutes"},{15,"quarter"},{16,"sixteen minutes"},{17,"seventeen minutes"},{18,"eighteen minutes"},{19,"nineteen minutes"},{20,"twenty minutes"},{21,"twenty one minutes"},{22,"twenty two minutes"},{23,"twenty three minutes"},{24,"twenty four minutes"},{25,"twenty five minutes"},{26,"twenty six minutes"},{27,"twenty seven minutes"},{28,"twenty eight minutes"},{29,"twenty nine minutes"},{30,"half"}};
    if (M == 0)
        cout<<HourMap[H]<<" "<<MinuteMap[M];
    if ((M<=30)&&(M!=0))
        cout<<MinuteMap[M]<<" past "<<HourMap[H];
    if (M > 30)
        cout<<MinuteMap[60-M]<<" to "<<HourMap[(H+1)%12];
    return 0;
}
