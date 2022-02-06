package DSA;
import java.util.Scanner;

public class Cyclically_Rotate {

	static void printarray(int arr[],int n) {
		for(int i=0;i<n;i++) {
			System.out.println(arr[i]+" ");
		}
		System.out.println("");
	}
	
	static void cycle_rotate(int arr[],int n) {
		int last =arr[n-1];
		for(int i=n-1;i>0;i--) {
			arr[i]=arr[i-1];
		}
		arr[0]=last;
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
		
		System.out.println("Cyclically Rotated Array : ");
		cycle_rotate(arr,n);
		printarray(arr,n);
		
		sc.close();
	}

}
