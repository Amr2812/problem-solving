public class Solution2 {
    public static class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public void reorderList(ListNode head) {
        // find middle using fast, slow pointers
        ListNode slow = head;
        ListNode fast = head.next;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        // reverse second half
        ListNode second = slow.next;
        slow.next = null; // to indeciate end of first list
        ListNode prev = null;
        while (second != null) {
            ListNode nxt = second.next;
            second.next = prev;
            prev = second;
            second = nxt;
        }


        // merge
        ListNode first = head;
        second = prev;
        while (second != null) {
            ListNode frstNxt = first.next;
            ListNode scndNxt = second.next;
            first.next = second;
            second.next = frstNxt;
            first = frstNxt;
            second = scndNxt;
        }
    }
}
