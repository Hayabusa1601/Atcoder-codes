#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m,c;
    cin >> n >> m >> c;

    vector<int> b(m);
    vector<vector<int>> a(n, vector<int>(m));

    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a.at(i).at(j);
        }
    }
    int co = 0;

    int i, j;
    for(i = 0; i < n; i++) {
        int sum = 0;
        for(j = 0; j < m; j++) {
            sum += a.at(i).at(j) * b.at(j);
        }
        sum += c;
        if(sum > 0) {
            co++;
        }
    }

    cout << co << endl;
    return 0;

}