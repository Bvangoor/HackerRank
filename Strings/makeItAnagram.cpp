#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;
    unordered_map<char, int>::iterator it;
    string S,T;
    cin>>S>>T;
    int count=0, len1, len2;
    len1=S.length();
    len2=T.length();
    for(int i=0, j=0; (i<len1)||(j<len2) ; i++, j++) {
        if(i<len1 && j<len2 ) {
            if(S[i]==T[j]) {
                //DO NOTHING
            } else {
                if(map1.count(T[j]) && map2.count(S[i])) {
                    if(map1[T[j]]==1)
                        map1.erase(T[j]);
                    else
                        map1[T[j]]=map1[T[j]]-1;
                    if(map2[S[i]]==1)
                        map2.erase(S[i]);
                    else
                        map2[S[i]]=map2[S[i]]-1;
                } else if(map1.count(T[j]) && !map2.count(S[i])) {
                    if(map1.count(S[i]))
                        map1[S[i]]=map1[S[i]]+1;
                    else
                        map1[S[i]]=1;
                    if(map1[T[j]]==1)
                        map1.erase(T[j]);
                    else
                        map1[T[j]]=map1[T[j]]-1;
                } else if(!map1.count(T[j]) && map2.count(S[i])) { 
                    if(map2[S[i]]==1)
                        map2.erase(S[i]);
                    else
                        map2[S[i]]=map2[S[i]]-1;
                    if(map2.count(T[j]))
                        map2[T[j]]=map2[T[j]]+1;
                    else
                        map2[T[j]]=1;
                } else {
                    if(map1.count(S[i]))
                        map1[S[i]]=map1[S[i]]+1;
                    else
                        map1[S[i]]=1;
                    if(map2.count(T[j]))
                        map2[T[j]]=map2[T[j]]+1;
                    else
                        map2[T[j]]=1;
                }
            }
        } else if (i<len1) {
            if(map2.count(S[i])) {
                if(map2[S[i]]==1)
                    map2.erase(S[i]);
                else
                    map2[S[i]]=map2[S[i]]-1;
            } else {
                if(map1.count(S[i]))
                    map1[S[i]]=map1[S[i]]+1;
                else
                    map1[S[i]]=1;
            }
        } else if(j<len2) {
            if(map1.count(T[j])) {
                if(map1[T[j]]==1)
                    map1.erase(T[j]);
                else
                    map1[T[j]]=map1[T[j]]-1;
            } else {
                if(map2.count(T[j]))
                    map2[T[j]]=map2[T[j]]+1;
                else
                    map2[T[j]]=1;
            }
        }
    }
    for(it=map1.begin(); it!=map1.end(); it++)
        count = count + (it->second) ;
    for(it=map2.begin(); it!=map2.end(); it++)
        count = count + (it->second) ;
    cout<<count;
    return 0;
}
