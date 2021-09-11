#include<bits/stdc++.h>
using namespace std;
typedef int64_t i64;
int main(){
    int num = 90;
    string s = to_string(num);
    cout << s <<endl;//intからstring
    string ss = "100";
    int n = stoi(ss);
    cout << n << endl;//stringからint
    double pai = 3.14159265358979;
   cout << pai << endl;//doubleはそのままだとcoutできない
   printf("%lf\n", pai);
   cout << fixed << setprecision(10);//これでcoutできる

    cout << pai << endl;
    cout << (int)pai << endl;
}