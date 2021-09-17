#include<bits/stdc++.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;

int main() {

    int a,b,k;
    cin >> a >> b >> k;

    rep (i,0,k) {
        if (a % 2 == 1) {
            a--;
        }
        b += (int)a/2;
        a -= a/2;

        i++;
        if(i < k) {
        if(b % 2 == 1) {
            b--;
        }
        a += (int)b/2;
        b -= b/2;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}