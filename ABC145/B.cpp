#include <bits/stdc++.h>
#define MOD 1e9 + 7
#define PI 3.141592653589793238
#define pb push_back
#define ALL(V) (V).begin(), (V).end()
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lint;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<int> VI;
typedef pair<ll, ll> P;
ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
ll char_to_ll(char c) { return (int)(c - '0'); }
ll string_to_ll(string s) { return char_to_ll(atoi(s.c_str())); }
bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }
/* */

int main() {
    int a,co=0;
    cin >> a;
    string b;
    cin >> b;

    bool ans;//二択なのでbool

    if(a % 2 == 1){//奇数だったら半分にできないのではじく
        ans = false;
    }else{
        string x = b.substr(0,a/2),y = b.substr(a/2);//substrで文字列から取り出す
        if(x == y){
            ans = true;
        }else{
            ans =false;
        }
        
    }
    if(ans == true){//判定
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
