package DSA;

public class ReverseofArray {
	
	static void Reverse(int arr[],int start,int end) {
		int temp;
		while(start < end) {
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
	}
	
	static void printarray(int arr[],int n) {
		for(int i=0;i<n;i++) {
			System.out.println("\t"+arr[i]+" ");
		}
	}

	public static void main(String[] args) {
		int[] arr = {4,7,2,1,8};
		int n=arr.length;
		System.out.println("Original Array :");
		printarray(arr,n);
		System.out.println("Reversed Array :");
		Reverse(arr,0,n-1);
		printarray(arr,n);

	}

}
