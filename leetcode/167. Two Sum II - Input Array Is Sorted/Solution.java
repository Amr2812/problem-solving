/*
* https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
* Two Pointer Solution
* Time: O(n)
*/

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int left = 0;
        int right = numbers.length - 1;

        while (right > left) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return new int[] {left+1, right+1};
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
        return null;
    }
    
}
