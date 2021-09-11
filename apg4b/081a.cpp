#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int co;
    if(s[0] == '1') co++;
    if(s[1] == '1') co++;
    if(s[2] == '1') co++;

    cout << co << endl;


}