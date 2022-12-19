package StringTcs;
public class String1 {
    static boolean palid(String str) {
        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) 
                return false;

                i++;
                j--;
            
        }
        return true;
    }

    public static void main(String[] args) {

        String str = "abcbac";

        str=str.toLowerCase();

        if(palid(str))
         System.out.println("yes");

         else
         System.out.println("no");

        


    }

}
