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

int main(){
    int k;
    string a,b;
    cin >> k >> a >> b;

    ll numa = 0, numb = 0;
    for(int i = 0; i < a.size() - 1; i++) {
        char tmpa = a.at(i);
        int tmp = tmpa - '0';

        numa += tmp * pow(k, a.size() - 1 - i);
    }
        char tmpa = a.at(a.size() - 1);
        numa += tmpa - '0';


    for(int i = 0; i < b.size() - 1; i++) {
        char tmpb = b.at(i);
        int tmp = tmpb - '0';

        numb += tmp * pow(k, b.size() - 1 - i);
    }
        char tmpb = b.at(b.size() - 1);
        numb += tmpb - '0';


    cout << numa*numb << endl;
    return 0;
}