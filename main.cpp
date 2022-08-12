#include <iostream>
#include <string>
#include "hashing.hpp"

using namespace std;


int main() {
    string s;
    cin >> s;
    cout << hash_string(s, 31) << endl;
}