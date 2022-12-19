package Recursion_core;

public class PrintNo {

    public static void main(String[] args) {
        int n = 7;

        solve(n);

    }

    static void solve(int n) {

        // base condition..
        if (n == 0)
            return;


        solve(n - 1); // Hypothesis
        System.out.println(n); // induction..

    }

}
