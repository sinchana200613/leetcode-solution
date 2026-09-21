void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}
#include <stdio.h>

int main() {
    char s[] = {'a'};
    int size = 1;
    reverseString(s, size);

    for (int i = 0; i < size; i++) {
        printf("%c", s[i]);
    }

    return 0;
}