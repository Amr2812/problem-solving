/*
* https://leetcode.com/problems/single-number/
* Time: O(n)
* Space: O(1)
*/

int singleNumber(int* nums, int numsSize) {
    int res = 0;
    for (size_t i = 0; i < numsSize; i++) {
        res = nums[i] ^ res;
    }
    return res;
}
