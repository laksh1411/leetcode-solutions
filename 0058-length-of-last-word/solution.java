class Solution {
    public int lengthOfLastWord(String s) {
        String[] arr=s.split(" ");
        int c=arr.length;
        String b=arr[c-1];
        return b.length();
    }
}
