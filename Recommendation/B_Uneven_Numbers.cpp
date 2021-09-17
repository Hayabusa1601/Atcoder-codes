#include<bits/stdc++.h>
#define rep(i, a, b) for(int i = (a); i <= (b); ++i)
using namespace std;

int main() {
    int n; 
    cin >> n;

    int co = 0;
    rep(i,1,n) {
        int digit = (log10(i) + 1);
        if( digit % 2 == 1) co++;
    } 

    cout << co <<endl;
    return 0;
}