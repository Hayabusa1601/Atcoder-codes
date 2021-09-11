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
    int n;
    cin >> n;
    char s[n][n];
    char t[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> t[i][j];
        }
    }
    bool flag = false;

    char s9[n][n];
    /*90度回転*/
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            s9[i][j] = s[n - 1 - j][i];
        } 

    }
    char s18[n][n];
    /*180度回転*/
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            s18[i][j] = s[n - 1 - i][n - 1 - j];
        } 

    }    
    char s27[n][n];
    /*270度回転*/
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            s27[i][j] = s[j][n - 1 - i];
        } 

    }

    /*0度回転*/
    int co = 0, ans = 0;
    /*sの行*/
    for(int i = 0; i < n; i++){
        /*tの行*/
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {

                if(s[i][k] == t[j][k]) {
                    co++;
                }
            }
            if(co == 5) {
                ans++;
                i++;
            }else{
                break;
                ans = 0;
            }
        }
        if(ans == 5) flag = true;

    }

        /*90度回転*/
    co = 0, ans = 0;
    /*sの行*/
    for(int i = 0; i < n; i++){
        /*tの行*/
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {

                if(s9[i][k] == t[j][k]) {
                    co++;
                }
            }
            if(co == 5) {
                ans++;
                i++;
            }else{
                break;
                ans = 0;
            }
        }
        if(ans == 5) flag = true;

    }
        /*180度回転*/
    co = 0, ans = 0;
    /*sの行*/
    for(int i = 0; i < n; i++){
        /*tの行*/
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {

                if(s18[i][k] == t[j][k]) {
                    co++;
                }
            }
            if(co == 5) {
                ans++;
                i++;
            }else{
                break;
                ans = 0;
            }
        }
        if(ans == 5) flag = true;

    }
        /*270度回転*/
    co = 0, ans = 0;
    /*sの行*/
    for(int i = 0; i < n; i++){
        /*tの行*/
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {

                if(s27[i][k] == t[j][k]) {
                    co++;
                }
            }
            if(co == 5) {
                ans++;
                i++;
            }else{
                break;
                ans = 0;
            }
        }
        if(ans == 5) flag = true;

    }
 
 
 
 
    if(flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }



    return 0;
    
}