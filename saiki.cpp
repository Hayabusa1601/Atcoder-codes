#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }

    return fibo(n-1) + fibo(n - 2);

}

int main(){
    int n = 0;
    while(1){
        int fi = fibo(n);
        if(fi <= 50000){
        cout << fibo(n) << endl;
        ++n;
        }else{
            break;
        }
    }
}