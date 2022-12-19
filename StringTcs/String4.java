package StringTcs;

public class String4 {

    static String vowel(String str) {

        str = str.toLowerCase();

        for (int i = 0; i < str.length() - 1; i++) {
            char ch = str.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                str = str.substring(0, i) + str.substring(i + 1);
                i--;

            }
        }
        return str;

    }

    public static void main(String[] args) {
        String str = "vivek this side";
        System.out.println("String after removing the vowels \n" + vowel(str));
    }

}
