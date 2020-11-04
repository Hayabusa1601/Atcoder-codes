#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793238
#define pb push_back
#define ALL(V) (V).begin(), (V).end()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lint;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
inline ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
inline ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
inline ll char_to_ll(char c) { return (int)(c - '0'); }
inline ll string_to_ll(string s) { return atoi(s.c_str()); }
inline bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }

int main(){
    ll n,co=0;
    cin >> n;
    vector<vector<int>> ab(n,vector<int>(2));
    rep(i,0,n){
        cin >> ab.at(i).at(0) >> ab.at(i).at(1);
    }
    rep(i,0,n){
        ll a = ab.at(i).at(0);
        ll b = ab.at(i).at(1);

        co += ((a+b)*(b-a+1))/2;
    }
    cout << co << endl;
    return 0;
}
//((a+b)*(b-a+1))/2でa～bの総和を求めることができる。
//AC
