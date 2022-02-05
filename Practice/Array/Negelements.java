package DSA;

import java.util.Scanner;

public class Negelements {
	
	static void printarray(int arr[],int n) {
		for(int i=0;i<n;i++) {
			System.out.println(arr[i]+" ");
		}
		System.out.println("");
	}
	
	static void movenegative(int arr[],int n) {
		int low=0;
		int temp;
		for(int i=0;i<n;i++) {
			if(arr[i]<0) {
				temp=arr[i];
				arr[i]=arr[low];
				arr[low]=temp;
				low++;
			}
		}
	}

	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Size of Array : ");
		int n = sc.nextInt();
		
		int[] arr = new int[n];
		System.out.println("Enter the elements in array : ");
		for(int i=0;i<n;i++) {
			arr[i]=sc.nextInt();
		}
		movenegative(arr,n);
		printarray(arr,n);
		
		sc.close();
	}
}
