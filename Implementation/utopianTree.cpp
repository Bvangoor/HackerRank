#include <iostream>
using namespace std;

int height(int n) {
    int count=1,i=1;
    while(i<=n){
        if(i%2==0)
            count+=1;
        else
            count*=2;
        i++;
    }
    return count;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
