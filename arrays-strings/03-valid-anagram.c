 #include <stdio.h>
#include <string.h>

int isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[] = "rat";
    char t[] = "car";

    if (isAnagram(s, t)) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}