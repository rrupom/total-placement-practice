package basic;

import java.util.Scanner;

public class Loop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements : ");
        int itemsNumber = sc.nextInt();
        int[] items = new int[itemsNumber];

        for(int i=0;i<itemsNumber;i++) {
            items[i] = sc.nextInt();
        }

        System.out.println("Printing out array elements");
        for(int a: items) {
            System.out.println(a);
        }

        System.out.println(items.toString());
    }
}
