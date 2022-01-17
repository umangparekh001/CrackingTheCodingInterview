#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * compress_string(char *str) {
    int i = 0, j = 0;
    int length, char_freq = 0;
    char *dstr = NULL;
    char cur_char;

    length = strlen(str);
    dstr = (char *) calloc(1, sizeof(char)*length);

    cur_char = str[i++];
    char_freq++;
    while (str[i] != '\0') {
        if (str[i] == cur_char) {
            char_freq++;
        } else {
            j += snprintf(dstr+j, 3, "%c%d", cur_char, char_freq);
            cur_char = str[i];
            char_freq = 1;
        }
        i++;
    }

    if (str[i] == '\0') {
        j += snprintf(dstr+j, 3, "%c%d", cur_char, char_freq);
    }

    if (length > j) {
        return dstr;
    }
    free(dstr);
    return NULL;
}

int main(void) {
    char str[50000], *dstr = NULL;

    printf("Enter String: ");
    scanf("%s", str);

    if ((dstr = compress_string(str))) {
        printf("Compressed String: %s\n", dstr);
        free(dstr);
    } else {
        printf("Compressed String: %s\n", str);
    }
    return 0;
}
