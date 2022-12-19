package StringTcs;
public class String7 {
    void reverse(String str) {
        int i = 0;
        int j = str.length();
        while (i < j) {
         //   swap();
        }
    }
    public static String swap(int i, int j, String s) {

    StringBuilder str = new StringBuilder(s);
    str.setCharAt(i, s.charAt(j));
    str.setCharAt(j, s.charAt(i));

    return str.toString();
    }

    public static void main(String[] args) {
       // String s = "abcdef";

    }

}
