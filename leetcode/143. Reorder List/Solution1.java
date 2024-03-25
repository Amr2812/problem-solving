/*
* O(N)
* Using Stack & Queue
* */

import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Stack;

class Solution1 {
     public static class ListNode {
         int val;
         ListNode next;
         ListNode() {}
         ListNode(int val) { this.val = val; }
         ListNode(int val, ListNode next) { this.val = val; this.next = next; }
     }
     
    public static ListNode reorderList(ListNode head) {
        Queue<Integer> first = new ArrayDeque<>();
        Stack<Integer> last = new Stack<>();
        ListNode tempHead = head;
        ListNode tempHead2 = head;

        int length = 0;
        while (tempHead != null) {
            length++;
            tempHead = tempHead.next;
        }

        if (length % 2 > 0) {
            first.add(tempHead2.val);
            tempHead2 = tempHead2.next;
        }

        int i = 0;
        while (tempHead2 != null) {
            if (i < (length / 2)) {
                first.add(tempHead2.val);
            } else {
                last.add(tempHead2.val);
            }
            tempHead2 = tempHead2.next;
            i++;
        }

        boolean f = false;
        ListNode curr = new ListNode(first.poll());
        head = curr;
        for (int j = 1; j < length; j++) {
            if (f) {
                curr.next = new ListNode(first.poll());
            } else {
                curr.next = new ListNode(last.pop());
            }

            f = !f;
            curr = curr.next;
        }

        return head;
    }

    public static void main(String[] args) {
        ListNode ln = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
        ListNode node = reorderList(ln);

        while (node != null) {
            System.out.print(node.val + " -> ");
            node = node.next;
        }
    }
}