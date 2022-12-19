public class Pro15 {

static int fact(int n){
    if(n == 0) { return 1;}
    return n *fact(n-1);
}


    public static void main(String[] args) {
        
        int x=5;
        int res = fact(x);

        System.out.println(" "+ res);



    }
    
}
