package basic;

import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Number of array elements");
        int numOfElements = sc.nextInt();
        int[] arr = new int[numOfElements];
        for(int i=0;i<numOfElements;i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Before Bubble sort : ");
        for (int i: arr) {
            System.out.print(i+" ");
        }

        bubbleSort(arr);

        System.out.println("After Bubble sort");
        for (int i: arr) {
            System.out.print(i+" ");
        }
    }
    public static void bubbleSort(int arr[]) {
        for(int i=0;i<arr.length;i++) {
            for(int j=i+1;j<arr.length;j++) {
                if(arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
