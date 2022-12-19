// Check if given year is a leap year or not



public class Pro11 {

    public static boolean  leap(int year){

        if(year %400 == 0) return true;
        if(year % 100 == 0) return false;
        if(year %4 ==0) return true;
        return false;
    }

    public static void main(String[] args) {
        
        int yr=1996;
        if(leap(yr) == true) {
            System.out.print("yes");
        }
        else{
            System.out.println("No");
        }

    }
    
}
