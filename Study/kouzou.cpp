#include<iostream>
using namespace std;

struct ABC{
    int num;
    double gas;
};
void func(ABC& c);
int main(){
   ABC car1;
   cin >> car1.num;
   cin >> car1.gas;

   func(car1);
   return 0;
}
void func(ABC& c){
    cout << c.num <<endl;
    cout << c.gas << endl;
}