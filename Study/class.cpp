#include<iostream>
using namespace std;
class CAR{
    public:
    int num;
    double gas;
    void show();
};
void CAR::show(){
    cout << "number>>" << num << endl;
    cout << "gas>>" << gas << endl;


}
int main(){
    CAR* pcar;
    pcar = new CAR;
    pcar -> num = 1234;
    pcar -> gas = 22.5;
    delete pcar;
    return 0;
}