/*
  * https://leetcode.com/problems/valid-anagram/
  * HashMap to calculate frequency of first string chars then loop over second string chars and check
  * O(n)
*/

class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;

        HashMap<Character, Integer> w1 = new HashMap<>();

        for (char c : s.toCharArray()) {
            if (!w1.containsKey(c)) {
                w1.put(c, 1);
            } else {
                int count = w1.get(c);
                w1.put(c, count + 1);
            }
        }

        for (char c : t.toCharArray()) {
            if (!w1.containsKey(c)) {
                return false;
            } else {
                int count = w1.get(c);
                if (count == 1) {
                    w1.remove(c);
                } else {
                    w1.put(c, count - 1);
                }
            }
        }
        return true;
    }
}
