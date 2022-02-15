package DSA;

public class WaterTrapping {
	
	static int trapping(int arr[],int n) {
		int l = 0;
		int h = n-1;
		int low = 0 , high = 0;
		int output = 0;
		
		while(l<h) {
			if(arr[l]<arr[h]) {
				if(arr[l]>low) {
					low = arr[l];
				}
				else {
					output = output + low - arr[l];
				}
				l++;
			}
			else {
				if(arr[h]>high) {
					high = arr[h];
				}
				else {
					output = output + high - arr[h];
				}
				h--;
			}
		}
		return output;
		
	}

	public static void main(String[] args) {
		int arr[]= {3,0,0,2,0,4};
		int n = arr.length;
		
		System.out.println("Trapped water = " + trapping(arr,n));

	}

}
