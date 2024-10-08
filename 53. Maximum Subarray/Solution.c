//This solution is using dynamic programming algorithm.
//Time complexity is O(n).

int returnMax(int a, int b) {
    return a > b? a : b;
}

int maxSubArray(int* nums, int numsSize) {
    int arrayS[1000000], arrays[1000000];
    arrays[0] = nums[0];
    arrayS[0] = nums[0];

    for(int i = 1; i < numsSize; i++) {
        arrays[i] = returnMax(nums[i], nums[i] + arrays[i - 1]);
        arrayS[i] = returnMax(arrayS[i - 1], arrays[i]);
    }
    return arrayS[numsSize - 1];
}
