/*
* https://leetcode.com/problems/kth-largest-element-in-a-stream/
* Space: O(n)
* Constructor => Time: O(n logn)
* add => Time: O(logn)
*/

class KthLargest {
    private PriorityQueue<Integer> heap;
    private int k;

    public KthLargest(int k, int[] nums) {
        this.k = k;
        this.heap = new PriorityQueue<>(k);
        for (int num : nums) {
            add(num);
        }
    }
    
    public int add(int val) {
        heap.add(val);
        if (heap.size() > k) heap.poll();
        return heap.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */
