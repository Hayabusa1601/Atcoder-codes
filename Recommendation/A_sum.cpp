#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 0;

    int cpn = n;
    while (cpn >= 1){
    if(cpn >= 8) {
        cpn -= 8;
        k++;
    } else if(cpn >= 4) {
        cpn -= 4;
        k++;
    } else if(cpn >= 2) {
        cpn -= 2;
        k++;
    } else if(cpn >= 1) {
        cpn -= 1;
        k++;
    }

    }

    cout << k << endl;


    while (n  > 0){
    if(n >= 8) {
        n -= 8;
        cout << 8 << endl;
    } else if(n >= 4) {
        n -= 4;
        cout << 4 << endl;
    } else if(n >= 2) {
        n -= 2;
        cout << 2 << endl;
    } else if(n >= 1) {
        n -= 1;
        cout << 1 << endl;
    }

    }
    return 0;
}