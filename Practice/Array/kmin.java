package DSA;
import java.util.Scanner;

public class kmin {
	
	static int kthmin(int arr[],int n,int k) {
		int temp;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j<n-1;j++) {
				if(arr[j]>arr[j+1]) {
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		return arr[k-1];
	}

	public static void main(String[] args) {
		int[] arr={5,2,8,1,9};
		int n = arr.length;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the K value :");
		int k=sc.nextInt();
		if(k>n) {
			System.out.println("Invalid Input");
		}
		else {
			System.out.println("kth (k="+k+") smallest element = "+kthmin(arr,n,k));
		}
	}
}
