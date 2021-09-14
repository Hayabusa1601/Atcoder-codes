//binary_search()でオンナジコトガデキルヨ
//lower_bound()だとチョットチガウヨ(最小のindexを求めるカンジニナル)
#include<iostream>
#include<vector>
#include<algorithm>

typedef long long ll;

using namespace std;

int BinarySearch(vector<int> vec, int key){
    //左端、右端、中央の値
    ll left = 0, right = (ll)vec.size(), mid;

    while (left < right) {//左右の範囲内で繰り返す
        mid = (left + right) / 2; //midの定義

        if (vec[mid] == key) {
            return mid;

        } else if (key > vec[mid]) {
            //中央より右側の範囲に限定
            left = mid + 1;

        } else if (key < vec[mid]) {
            //中央より左側の範囲に限定
            right = mid;
        }
    }
    //見つからなかった場合
    return -1;

}

int main(void) {
    int n;
    cout << "要素数:";
    cin >> n;
    cout << endl;

    int t;
    cout << "検索対象:";
    cin >> t;
    cout << endl;

    vector<int> a(n);
    cout << "配列:";
    for (int i = 0; i < n; i++) cin >> a.at(i);
    cout << endl;

    sort(a.begin(), a.end());

    int ansprime = BinarySearch(a, t);

    cout << "存在したインデックス:" << ansprime << endl;
    cout << "確認:" << a.at(ansprime) << endl;

    return 0;

}