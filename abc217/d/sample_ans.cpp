#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll l;
    int q;
    cin >> l >> q;

    std::set<ll> woods{l};
    for (int i = 0; i < q; ++i) {
        ll c,x; 
        cin >> c >> x;
        if (c == 1) {
            woods.insert(x);
        } else {
            auto itr = woods.lower_bound(x);
            if(itr == woods.begin()){
                std::cout << *itr << std::endl;
            } else {
                std::cout << *itr - *(--itr) << std::endl;
        }
        }
    }
    

    return 0;
}