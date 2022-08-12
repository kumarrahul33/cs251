#include "hashing.hpp"

int hash_string(string s) {
    int m = 31;
    int p = 7;
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i] * pow(p, i);
    }
    return sum % m;
}