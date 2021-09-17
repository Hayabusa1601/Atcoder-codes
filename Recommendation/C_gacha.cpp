//TLE
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s.at(i);

    int co = 0;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        bool flag = false;

        for(int j = 0; j < i; j++) {
            if(i == j) continue;

            if(s.at(i) == s.at(j)){
                flag = true;
                break;
            }
        }
        if(flag == false) sum++;
    }
    cout << sum << endl;

    return 0;

}