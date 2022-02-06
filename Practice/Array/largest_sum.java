package DSA;

public class largest_sum {
	
	static int sum(int arr[],int n) {
		int max=Integer.MIN_VALUE;
		int temp=0;
		
		for(int i=0;i<n;i++) {
			temp=temp+arr[i];
			if(temp>max) {
				max=temp;
			}
			if(temp<0) {
				temp=0;
			}
		}
		return max;
	}

	public static void main(String[] args) {
		int[] arr={-2, -3, 4, -1, -2, 1, 5, -3};
		int n=arr.length;
		
		System.out.println("Sum of Maximum Contiguous Subarray = "+sum(arr,n));
	}

}
