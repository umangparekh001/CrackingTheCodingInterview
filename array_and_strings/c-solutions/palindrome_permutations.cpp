#include <iostream>
#include <cctype>
using  namespace std;

bool is_palindrome_permutation(string str) {
    int occurence[128] = {0}; //128 ASCII printable characters - could be replaced by a hash implementation
    int odd_char_count = 0;
    //calculate the occurence of the characters
    for (int i = 0; i < str.length(); i++) {
        if (str[i] > 64 && str[i] < 124) {
            if (str[i] > 64 && str[i] < 92) {
                str[i] = tolower(str[i]);
            }
            occurence[str[i]]++;
        }
    }

    for (int i = 0; i < 128; i++) {
        if (occurence[i] % 2 != 0) {
            odd_char_count++;
        }
    }
    // if string is permutation of palindrome it will have 0 or 1 characters that occurence in odd number
    return (odd_char_count <= 1);
}

int main() {
    string str;

    cout << "Enter string: ";
    //cin >> str;
    getline(std::cin, str);

    cout << "String " << (is_palindrome_permutation(str) ? "is " : "isn't ") << "permutation of palindrome" << endl;

    return 0;
}
