// https://leetcode.com/problems/merge-two-sorted-lists
// O(N+M)

class Solution {
    public static class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode sorted = new ListNode();
        ListNode first = sorted;

        while (list1 != null && list2 != null) {
            if (list1.val > list2.val) {
                sorted.next = new ListNode(list2.val);
                list2 = list2.next;
            } else {
                sorted.next = new ListNode(list1.val);
                list1 = list1.next;
            }

            sorted = sorted.next;
        }

        sorted.next = list1 == null ? list2 : list1;
        return first.next;
    }

    public static void main(String[] args) {
    }
}