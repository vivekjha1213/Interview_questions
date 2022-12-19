public class Pro2 {
    

    static boolean reverse(int n){

        int reverse = 0;
        int temp=n;

        while(temp > 0){
            reverse = reverse*10+temp%10;
            temp=temp/10;

        }

        if(n== reverse) return true;
        return false;

    }


    public static void main(String[] args) {


        int min=100;
        int max=150;

        for(int i=min;i<=max;i++){
            if(reverse(i)){
                System.out.print(i+" ");
            }
        }
        
    }
}
