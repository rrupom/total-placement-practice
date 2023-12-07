package basic;

import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements : ");
        int numOfElements = sc.nextInt();
        int []arr = new int[numOfElements];

        for(int i=0;i<numOfElements;i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the number you want to search : ");
        int key = sc.nextInt();
        int result = linearSearch(arr,key);
        if(result == -1) {
            System.out.println("Element is not found in the array");
        } else {
            System.out.println("Element is found in the array");
        }
    }
    public static int linearSearch(int arr[],int key) {
        for(int i:arr) {
            if(i==key) {
                return 1;
            }
        }
        return -1;
    }
}
