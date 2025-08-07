#include <bits/stdc++.h>
using namespace std;

// 1) Using built-in method to convert to uppercase
string toUpperCase_Method(string s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

// 2) Using built-in method to convert to lowercase
string toLowerCase_Method(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

// 3) Manual conversion to uppercase using ASCII
string toUpperCase_Manual(string s) {
    for (char& c : s) {
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }
    }
    return s;
}

// 4) Manual conversion to lowercase using ASCII
string toLowerCase_Manual(string s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
    }
    return s;
}

int main() {
    string str = "HeLLo WoRLD";

    cout << "Original: " << str << endl;

    cout << "Uppercase (Method): " << toUpperCase_Method(str) << endl;
    cout << "Lowercase (Method): " << toLowerCase_Method(str) << endl;

    cout << "Uppercase (Manual): " << toUpperCase_Manual(str) << endl;
    cout << "Lowercase (Manual): " << toLowerCase_Manual(str) << endl;

    return 0;
}
