class Solution {
    public int search(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }

    // Recursive (slower)
    // private int binarySearch(int[] nums, int low, int high, int target) {
    //     int mid = low + (high - low) / 2;
    //     if (low > high) return -1;

    //     if (nums[mid] == target) {
    //         return mid;
    //     } else if (nums[mid] > target) {
    //         return binarySearch(nums, low, mid - 1, target);
    //     } else {
    //         return binarySearch(nums, low + 1, high, target);
    //     }
    // }
}