import java.util.*;

public class arr{
    public static void main(String args[]){
        int[] marks = new int[4];

        System.out.println("Enter marks for Chem, Phy, and Math:");
        Scanner sc = new Scanner(System.in);
        marks[0]=sc.nextInt();
        marks[1]=sc.nextInt();
        marks[2]=sc.nextInt();

        System.out.println("chem :"+marks[0] );
        System.out.println("phy :"+marks[1] );
        System.out.println("math :"+marks[2] );

        sc.close();

    }
}