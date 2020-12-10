#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int co = 0;

	for(int i = 0; i < 4; i++){
		if(s[i] == '+') co++;
		else if(s[i] == '-') co--;
	}
	cout << co << endl;

	return 0;	
}

