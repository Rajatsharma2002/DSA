package DSA;

public class Maxmin {
	
	static int min(int arr[],int n) {
		int min=arr[0];
		for(int i=0;i<n;i++) {
			if(min>arr[i]) {
				min=arr[i];
			}
		}
		return min;
	}
	
	static int max(int arr[],int n) {
		int max=arr[0];
		for(int i=0;i<n;i++) {
			if(max<arr[i]) {
				max=arr[i];
			}
		}
		return max;
	}

	public static void main(String[] args) {
		int[] arr={5,8,2,9,10,3};
		int n=arr.length;
		
		System.out.println("Minimum Element : "+min(arr,n));
		System.out.println("Maximum Element : "+max(arr,n));
	}

}
