public class Problem {

    static int reverse(int x) {

        int y = 0;

        while (x > 0) {
            int digi = x % 10;
            y = y * 10 + digi;

            x = x / 10;

        }
        return y;

    }

    public static void main(String[] args) {

        int x = 121;
        int dum = x;

        int y = reverse(x);
        if (dum == y) {
            System.out.print("Valid");

        } else {
            System.out.print("invalid");
        }

    }
}
