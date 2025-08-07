#include <iostream>
#include <string>
using namespace std;

int main() {
    // string to int
    string s = "12345";
    int num = stoi(s);
    cout << "String to int: " << num << endl;

    // int to string
    int x = 67890;
    string str = to_string(x);
    cout << "Int to string: " << str << endl;

    return 0;
}
