/*
 * 1. Two Sum  (LeetCode #1, Easy)
 * 给定数组 nums 和目标值 target，返回两个下标，使对应元素之和为 target。
 *
 * 暴力解 O(n^2)：两层循环。先写出来，跑通，再想优化。
 * 优化解 O(n)：哈希表（C 语言要自己写开放寻址或链地址，等学完链表再做）。
 */
#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    static int result[2];
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int nums[] = {2, 7, 11, 15};
    int size = 0;
    int *ans = twoSum(nums, 4, 9, &size);
    printf("[%d, %d]\n", ans[0], ans[1]); /* 期望 [0, 1] */
    return 0;
}
