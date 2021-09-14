#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
    木材の右端をstd::setで管理する。
    これは順序付き集合であり、要素を自動的にソートして内部に格納してくれる。

*/

int main() {
    //長さとクエリの数を宣言
    ll l;
    int q;
    cin >> l >> q;

    std::set<ll> woods{l};//順序付き集合の宣言

    for (int i = 0; i < q; ++i) {
        //クエリを入力
        ll c,x; 
        cin >> c >> x;

        if (c == 1) {
            //c = 1であれば集合に追加
            woods.insert(x);
        } else {
            //lower_bound(二分探索)でx地点を含む木材の右端の値(のイテレータ)を得る
            auto itr = woods.lower_bound(x);
            

            if(itr == woods.begin()){
            //イテレータがsetの先頭要素と等しければ、その値を出力する。
                std::cout << *itr << std::endl;
            } else {
            //そうでなければその値が属する木材の右端の値 - ひとつ前の木材の右端の値を出力する。
                std::cout << *itr - *(--itr) << std::endl;
        }
        }
    }
    

    return 0;
}