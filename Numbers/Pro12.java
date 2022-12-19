// Example 1:
// Input: N = 472
// Output: 274
// Explanation: Reading the number from back to front, we see that the output should be 274

public class Pro12 {

    static private int rev(int n) {
        int d;
        int rev = 0;
        while (n != 0) {
            d = n % 10;
            rev = rev * 10 + d;
            n = n / 10;
        }

        return rev;
    }



    public static void main(String[] args) {
        int n=1234;

        System.out.print("the reverse number is:"+rev(n));

    }

}
