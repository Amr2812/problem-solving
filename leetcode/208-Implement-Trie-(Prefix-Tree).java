/**
* Fist solution: 
*   - Uses a TreeMap which is a red-black tree (could be easily switched to HashMap)
*   - Slower but uses less memory
* Second solution
*   - Uses a character set array mapping with fixed size length 128 (ASCII)
*   - Faster but uses more memory
 */
class Trie {
    private Node root;

    private static class Node {
        TreeMap<Character, Node> next = new TreeMap<>();
        private boolean isKey = false;
    }

    public Trie() {
        root = new Node();
    }
    
    public void insert(String word) {
        root = put(root, word, 0);
    }

    private Node put(Node x, String word, int d) {
        if (x == null) x = new Node();
        if (word.length() == d) {
            x.isKey = true;
            return x;
        }

        char c = word.charAt(d);
        x.next.put(c, put(x.next.get(c), word, d + 1));
        return x;
    }
    
    public boolean search(String word) {
        Node x = get(root, word, 0);
        return x != null && x.isKey;
    }

    public Node get(Node x, String word, int d) {
        if (x == null) return null;
        if (word.length() == d) return x;
        return get(x.next.get(word.charAt(d)), word, d + 1);
    }
    
    public boolean startsWith(String prefix) {
        return get(root, prefix, 0) != null;
    }
}

// class Trie {
//     private static final int R = 128; // ASCII
//     private Node root;

//     private static class Node {
//         private Node[] next = new Node[R];
//         private boolean isKey = false;
//     }

//     public Trie() {
//         root = new Node();
//     }
    
//     public void insert(String word) {
//         root = put(root, word, 0);
//     }

//     private Node put(Node x, String word, int d) {
//         if (x == null) x = new Node();
//         if (word.length() == d) {
//             x.isKey = true;
//             return x;
//         }

//         char c = word.charAt(d);
//         x.next[c] = put(x.next[c], word, d + 1);
//         return x;
//     }
    
//     public boolean search(String word) {
//         Node x = get(root, word, 0);
//         return x != null && x.isKey;
//     }

//     public Node get(Node x, String word, int d) {
//         if (x == null) return null;
//         if (word.length() == d) return x;
//         return get(x.next[word.charAt(d)], word, d + 1);
//     }
    
//     public boolean startsWith(String prefix) {
//         return get(root, prefix, 0) != null;
//     }
// }

// /**
//  * Your Trie object will be instantiated and called as such:
//  * Trie obj = new Trie();
//  * obj.insert(word);
//  * boolean param_2 = obj.search(word);
//  * boolean param_3 = obj.startsWith(prefix);
//  */