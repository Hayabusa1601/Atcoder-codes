#include<iostream>
#include<vector>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

using namespace std;

int main(){
    int n,size;
    cin >> n >> size;
    bool ans = false;
    vector<int> s(size);
    rep(i,0,size)cin >> s.at(i);

    for(int bit = 0; bit < (1<<size); ++bit){
        int sum = 0;
        for(int i = 0; i < size; i++){
            if(bit & (1<<i)){
                sum+=s.at(i);
            }
        }
        if(n == sum) ans = true;
    }

    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;

    }
    return 0;

}