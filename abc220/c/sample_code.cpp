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


int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    FOR(i,0,n) cin >> a.at(i);
    ll x;
    cin >> x;

    ll sum = 0;
    for(ll val:a) {
        sum += val;
    }//aの合計

    ll P = x / sum; // a全体を連結した個数(x > sum * P)
    ll sumb = P * sum; //連結したあとの合計
    ll ans = P * n;//連結したあとの添字

    for(ll val:a) {
        sumb +=  val;
        ans++;
        if(sumb > x) {
            cout << ans << endl;
            return 0;
        }

    }
    return 0;
}