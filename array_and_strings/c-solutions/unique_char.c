#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool has_all_unique_chars(char *str, int length) {
    bool is_used[128] = {[0 ... 127] = false};
    int i;

    for (i = 0; i < length; i++) {
        if(is_used[(int)str[i]]) {
            //printf("%c is repeated!\n", str[i]);
            return false;
        }
        is_used[(int)str[i]] = true;
    }
    return true;
}

int main() {
    int length = 0;
    char *str = NULL;

    printf("Enter the length of string: ");
    scanf("%d", &length);

    str = (char *) calloc(1, sizeof(char) * (length + 1));

    printf("Enter String: ");
    scanf("%s", str);

    printf("%s has %s characters.\n", str, has_all_unique_chars(str, length) ? "all unique" : "some duplicate");
    free(str);
    return 0;
}
