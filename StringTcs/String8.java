package StringTcs;

// Sum of the Numbers in a String
// Example 1:
// Input: string = “123xyz”
// Output: 123
public class String8 {

    static int addsum(String str) {

        String tempsum = "0";
        int sum = 0;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (Character.isDigit(ch))
                tempsum += ch;

            else {
                sum += Integer.parseInt(tempsum);
                tempsum = "0";
            }

        }

        return sum + Integer.parseInt(tempsum);
    }

    public static void main(String[] args) {

        String str = "1bc268";
        System.out.print("Sum: ");
        System.out.println(addsum(str));

    }
}
