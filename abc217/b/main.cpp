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

    vector<string> s(3);
    cin >> s.at(0) >> s.at(1) >> s.at(2);
    bool flag[4] = {false,false,false,false};

    for(int i = 0; i < 3; i++) {
        if(s.at(i) == "ABC") {
            flag[0] = true;
        } else if(s.at(i) == "ARC") {
            flag[1] = true;
        } else if(s.at(i) == "AGC") {
            flag[2] = true;
        } else if(s.at(i) == "AHC") {
            flag[3] = true;
        }
    }

    if(flag[0] == false) {
        cout << "ABC" << endl;
    } else  if(flag[1] == false) {
        cout << "ARC" << endl;
    } else  if(flag[2] == false) {
        cout << "AGC" << endl;
    } else  if(flag[3] == false) {
        cout << "AHC" << endl;
    }

    return 0;


}