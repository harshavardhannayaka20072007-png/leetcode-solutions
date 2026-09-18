#include <stdio.h>

void moveZeroes(int *nums, int numsSize) {
    int writeIndex = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writeIndex++] = nums[i];
        }
    }

    for (int i = writeIndex; i < numsSize; i++) {
        nums[i] = 0;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    moveZeroes(nums, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
