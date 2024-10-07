class Solution {
    public int characterReplacement(String s, int k) {
        int l = 0, r = 0, res = 0, maxF = 0;
        int[] count = new int[26];

        while (r < s.length()) {
            count[s.charAt(r) - 'A']++;
            maxF = Math.max(maxF, count[s.charAt(r) - 'A']);

            while ((r - l + 1) - maxF > k) {
                count[s.charAt(l) - 'A']--;
                l++;
            }

            res = Math.max(res, r - l + 1);
            r++;
        }

        return res;
    }
}