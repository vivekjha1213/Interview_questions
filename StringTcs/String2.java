package StringTcs;

public class String2 {

    public static void count(String str) {

        int vowels = 0, consants = 0, whitespaces = 0;

        str = str.toLowerCase();

        for (int i = 0; i < str.length() - 1; i++) {

            char ch = str.charAt(i);
        

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 

                vowels++;

             else if (ch >= 'a' && ch <= 'z') 
                consants++;

             else if (ch == ' ') 
                whitespaces++;

            }
            System.out.println("vowels: " + vowels);
            System.out.println("consants: " + consants);
            System.out.println("whitespaces: " + whitespaces);

        

    }
    public static void main(String[] args) {

        String str ="hello my name is vivek kumar jha";
        count(str);

    }

}
