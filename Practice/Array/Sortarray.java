package DSA;
import java.util.Scanner;

public class Sortarray {
	
	static void printarray(int arr[],int n) {
		for(int i=0;i<n;i++) {
			System.out.println(arr[i]+" ");
		}
		System.out.println("");
	}
	
	static void sort(int arr[],int n) {
		int low=0;
		int mid=0;
		int high=n-1;
		int temp;
		while(mid<high) {
			if(arr[mid]==0) {
				temp=arr[low];
				arr[low]=arr[mid];
				arr[mid]=temp;
				low++;
				mid++;
			}
			if(arr[mid]==1) {
				mid++;
			}
			if(arr[mid]==2) {
				temp=arr[mid];
				arr[mid]=arr[high];
				arr[high]=temp;
				high--;
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
		sort(arr,n);
		System.out.println("Sorted Array : ");
		printarray(arr,n);
		sc.close();
	}
}
