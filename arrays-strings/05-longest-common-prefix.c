#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main() {
    char str1[] = "dog";
    char str2[] = "racecar";
    char str3[] = "car";
    char* strs[] = {str1, str2, str3};

    printf("%s", longestCommonPrefix(strs, 3));

    return 0;
}