//AC
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b.at(i);

    vector<int> c(n);
    for (int i = 0; i < n - 1; i++) cin >> c.at(i);

    int ans = 0;
    int i;
    for (i = 0; i < n - 1; i++) {
        ans += b.at(a.at(i) - 1);

        if(a.at(i) + 1 == a.at(i + 1)) {
            ans += c.at(a.at(i) - 1);
        }
    }
    ans += b.at(a.at(i) - 1);

    cout << ans << endl;


}