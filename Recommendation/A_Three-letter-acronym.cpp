#include<iostream>
using namespace  std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    char S1 = s1[0] - 32, S2 = s2[0] - 32, S3 = s3[0] - 32;

    cout << S1 << S2 << S3 << endl;

    return 0;
    
}