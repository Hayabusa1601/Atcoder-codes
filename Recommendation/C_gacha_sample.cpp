#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> st;

    for(int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        st.insert(tmp);
    }

 
    cout << st.size() << endl;

    return 0;

}