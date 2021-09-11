#include<iostream>
using namespace std;
int main(){
    int n;
    int co=0;
    cin >> n;
    int a[200];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    while(1){
        int flag = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2){
            flag = 1; 
        }
    }
    if(flag == 1) break;

    
    for(int j = 0; j < n; j++){
        a[j] /= 2;
    }
        co++;
    }

    cout << co << endl;
    return 0;
}
