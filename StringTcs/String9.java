package StringTcs;

import java.util.Arrays;

public class String9 {
    // count frequency in Stringggg.......
    static String StringSot(String str) {
        char[] ch = str.toCharArray();
        Arrays.sort(ch);
        return new String();
    }

    static void CountFre(String str) {
        str = StringSot(str);
        char ch = str.charAt(0);
        int count = 1;
        for (int i = 1; i < str.length()-1; i++) {
          if (str.charAt(i) == ch)
            count++;
          else {
            System.out.print(ch);
            System.out.print(count + " ");
            ch = str.charAt(i);
            count = 1;
          }
        }
        System.out.print(ch);
        System.out.print(count + " ");
      }
        

    public static void main(String[] args) {

        String str = "hellothisisvivekjha";
        CountFre(str);
    }

}
