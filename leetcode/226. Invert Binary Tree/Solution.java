/**
 * https://leetcode.com/problems/invert-binary-tree/
 * TIme O(N) | Space O(N)

 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode invertTree(TreeNode root) {
        if (root == null) return null;

        // swap children
        TreeNode tempRight = root.right;
        root.right = root.left;
        root.left = tempRight;

        invertTree(root.left);
        invertTree(root.right);

        return root;
    }
}
