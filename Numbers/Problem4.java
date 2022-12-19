public class Problem4 {
 
static boolean perfect(int n){

    int sum=0;

    for(int i=1;i<=n-1;i++){
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    return true;

    else return false;
}

public static void main(String[] args) {


    boolean ex1=perfect(8);
    if(ex1 == true)
    {
        System.out.println("perfect");
    }else{
        System.out.println("not-perfect");
    }
    
}    
}
