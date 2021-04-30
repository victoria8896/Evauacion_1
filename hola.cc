#include <iostream>
#include <vector>
using namespace std;

struct T {int a; float b;};

main() {
    int a = 3;
    string s = "hola";
    vector <int> v = {1,2,3,4,5};
    vector <T> v2= {{3,5.2}, {3, 4.55}};
cout << "hola 1" << endl;
cout << "hola 2" << endl;
cout << "hola 3" << endl;
v2[0].a = 4;
cout << "hola 4" << endl;
cout << "hola 5" << endl;

}