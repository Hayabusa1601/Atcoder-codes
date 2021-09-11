#include <iostream>
#include <fstream>
#include <sys/stat.h>

using namespace std;

void write(string dir, string name, string data){
    ofstream stream;
    stream.open(dir + "/" + name, ios::out);
    stream << data << endl;
}

int main(){
    string name;
    cout << "コンテスト名 : ";
    cin >> name;

    mkdir(name.c_str(), S_IRWXU | S_IRWXG | S_IRWXO);

    ifstream reading_file("Example/ex.cpp", ios::in);
    string data((istreambuf_iterator<char>(reading_file)), istreambuf_iterator<char>());

    write(name, "A.cpp", data);
    write(name, "B.cpp", data);
    write(name, "C.cpp", data);
    write(name, "D.cpp", data);
    write(name, "E.cpp", data);
    write(name, "F.cpp", data);

    ifstream do_file("Example/do.sh", ios::in);
    string do_data((istreambuf_iterator<char>(do_file)), istreambuf_iterator<char>());

    write(name, "do.sh", do_data);

    return 0;
}
