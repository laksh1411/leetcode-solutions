class Solution {
    public boolean isPalindrome(String s) {
        String b=s.toLowerCase();
        int i=0;
        String a="";
        String c="";
        if(b.length()<=1) return true;
        while(i<b.length()){
            if(Character.isLetterOrDigit(b.charAt(i))){
                a+=b.charAt(i);
            }
            i++;
        }
       // if(a.length()==1) return false;
        for(i=a.length()-1;i>=0;i--){
            c+=a.charAt(i);
        }
        //System.out.println(c);
        return c.equals(a);
    }
}
