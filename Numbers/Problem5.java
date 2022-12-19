public class Problem5 {
    public static void main(String[] args) {

        int n=9;
        if(isodd(n) == 0)
        {
            System.out.print("even");
        }
        else{
            System.out.print("odd");
        }

        
    }



    public static int isodd(int n){
        return (n%2);
    }
}
