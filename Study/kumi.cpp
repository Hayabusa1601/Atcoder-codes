#include<bits/stdc++.h>
using namespace std;

string concat(string a, string b){
    return a + b;

}

int main(){
    /*pair*/
    pair<string,int> p("abc", 3);
    cout << p.first << endl;//abc 

    p.first = "hello";
    cout << p.first << endl;
    cout << p.second << endl;

    p = make_pair("*",1);//pairをつくる

    string s;
    int a;
    tie(s,a) = p;//pairを分解するtie
    cout << s << endl;
    cout << a << endl;

    /*tuple */

    tuple<int,string,bool> data(1,"hello",true);
    get<2>(data) =false;//getの横は必ず定数
    cout << get<1>(data)<< endl;//hello

    data = make_tuple(2,"WORLD",true);

    int aa;
    string ss;
    bool f;
    tie(aa,ss,f) = data;//分解
    cout << aa << " " << ss << " " << f << endl;
    return 0;

    /*比較*/

    pair <int,int> aaa(3,1);
    pair <int,int> bbb(2,10);
    //3 > 2なのでa < bはfalse
    if(aaa < bbb){
        cout << "a < b" << endl;
    }else{
        cout << "a >= b" << endl;
    }

    pair<int,int> c(5,1);
    pair<int,int> c(5,10);
    //5 == 5 であり1 < 10 なのでc<dはtrue
    if(c < d){
        cout << "c < d" <<endl;

    }else{
        cout << "c >=d" << endl;

    }
    return 0;

    /* auto */

    string ha = "Hello,";
    string hb = "World";
    auto ab = concat(ha,hb);
    cout << ab << endl;

    vector<int> c = {1,2,3};
    auto d = c; //vector<int>

    for(auto elem : d){
        //elemはint型
        cout << elem << endl;
        
    }
}