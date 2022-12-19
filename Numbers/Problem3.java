public class Problem3 {

    static boolean reverse(int n) {

        if (n == 1)
            return false;

        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;

        }
        return true;

    }

    public static void PrintPrime(int a,int b){
        for(int i=a;i<=b;i++){
            if(reverse(i)){
                System.out.println(i);
            }
        }
    }



    public static void main(String[] args) {

        int a=10,b=20;
        PrintPrime(a, b);

    }
}