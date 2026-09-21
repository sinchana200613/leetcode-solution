#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main() {
    int nums[] = {0, 0, 1};
    int size = 3;

    moveZeroes(nums, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}