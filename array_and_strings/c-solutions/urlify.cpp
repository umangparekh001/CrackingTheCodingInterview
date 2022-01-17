#include <iostream>
using namespace std;

void replace_spaces(char *str, int true_length) {
    int new_length = 0;
    int rev_idx = 0;
    int num_spaces = 0;
    int i;

    //count the spaces in the string
    for (i = 0; i < true_length; i++) {
        if (str[i] == ' ') {
            num_spaces++;
        }
    }

    //calculated the new length
    new_length = true_length + (num_spaces*2);
    rev_idx = new_length - 1;

    //start from the end of str
    for (i = true_length-1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[rev_idx--] = '0';
            str[rev_idx--] = '2';
            str[rev_idx--] = '%';
        } else {
            str[rev_idx--] = str[i];
        }
    }
}

int main() {
    char str[] = "Mr John Smith    ";

    cout << "url: " << str;
    cout << endl;
    replace_spaces(str, 13);
    cout << "New url: " << str;
    cout << endl;
    return 0;
}
