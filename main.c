#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int zero = 0, one = 0, two = numsSize - 1;

    while (one <= two) {
        if (nums[one] == 0) {
            int temp = nums[zero];
            nums[zero] = nums[one];
            nums[one] = temp;
            zero++;
            one++;
        } else if (nums[one] == 1) {
            one++;
        } else {
            int temp = nums[one];
            nums[one] = nums[two];
            nums[two] = temp;
            two--;
        }
    }
}

void printArray(int* nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; ++i) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
}

int main() {
    int nums1[] = {2, 0, 2, 1, 1, 0};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: nums = [2,0,2,1,1,0]\n");
    sortColors(nums1, numsSize1);
    printf("Output: ");
    printArray(nums1, numsSize1);

    int nums2[] = {2, 0, 1};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: nums = [2,0,1]\n");
    sortColors(nums2, numsSize2);
    printf("Output: ");
    printArray(nums2, numsSize2);

    return 0;
}
