#include<iostream>
#include<vector>
using namespace std;

    
int main() {
    vector<int> group{1,3,1,2,1,2,1,1,2,1,2,1};
    int x, y;
    cin >> x >> y;

    if(group[x - 1] == group[y - 1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;


}