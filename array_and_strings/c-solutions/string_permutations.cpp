#include <iostream>
using  namespace std;

bool check_permutation(string str1, string str2) {
    int occurence[128] = {0}; //128 ASCII printable characters - could be replaced by a hash implementation

    if (str1.length() != str2.length()) {
        return false;
    }

    for (int i = 0; i < str1.length(); i++) {
        occurence[str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++) {
        occurence[str2[i]]--;
        if (occurence[str2[i]] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1;
    string str2;

    cout << "Enter string 1: ";
    cin >> str1;

    cout << "Enter string 2: ";
    cin >> str2;

    cout << "Strings " << (check_permutation(str1, str2) ? "are " : "aren't ") << "permutation of each other." << endl;

    return 0;
}
