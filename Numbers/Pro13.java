public class Pro13 {
    
static private void MInMax(int n){


int d;
int mini = Integer.MAX_VALUE;
int max =Integer.MIN_VALUE;

while(n!=0){
    d=n%10;

    mini=Math.min(mini, d);
    max=Math.max(max, d);

    n=n/10;





}
System.out.println("the minimum "+mini);
System.out.println("the maximum"+max);



}




    public static void main(String[] args) {
        
        int n=4726;
        MInMax(n);
    }


}
