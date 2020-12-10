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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    FOR(i,0,n) cin >> a[i];

    int one;
    FOR(i,0,n) if(a[i] == 0) {one = i;}

    int co1 = one / (k-1);
    int co2 = (n - 1 - one) / (k - 1);
    int amari = one % (k-1) + (n - 1 - one) % (k - 1);

    int sum = co1 + co2 ;

    if(amari < (k-1)) sum++;
    else if(amari > (k-1)) sum += 2;
    
    cout << sum << endl;
    
    return 0;
}
