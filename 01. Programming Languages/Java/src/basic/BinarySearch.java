package basic;

import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Number of array elements");
        int numOfElements = sc.nextInt();
        int arr[] = new int[numOfElements];
        for(int i=0;i<numOfElements;i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        System.out.println("Enter the key");
        int key = sc.nextInt();
        int result = binarySearch(arr,key);

        if(result == -1) {
            System.out.println("Element is not found in the array");
        } else {
            System.out.println("Element is found in the position : "+(result+1));
        }
    }

    public static int binarySearch(int arr[],int key) {
        int low = 0;
        int high = arr.length - 1;
        while (low<=high) {
            int mid = (low+high)/2;
            if(arr[mid] == key) {
                return mid;
            } else if(arr[mid]>key) {
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return -1;
    }
}
