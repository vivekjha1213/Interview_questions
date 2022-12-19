package Recursion_core;

public class PrintN_to_1 {

    static void solved(int n){


        if(n==0) //base case
        return;
        System.out.println(n); //Indection....
        solved(n-1); //Hypothesis..

    }
    

    public static void main(String[] args) {
        int n=9;

        solved(n);
        
    }
}
