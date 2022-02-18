package DSA;

public class triplet {
	
	static boolean findtriplet(int arr[],int n,int sum) {
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				for(int k=j+1;k<n;k++) {
					if(sum == arr[i]+arr[j]+arr[k]) {
						System.out.print("Triplet = "+"("+arr[i]+" "+arr[j]+" "+arr[k]+")");
						return true;
					}
				}
			}
		}
		return false;
	}
	
	public static void main(String[] args) {
		int arr[] = {1,4,45,6,10,8};
		int n = arr.length;
		
		int sum = 13;
		
		findtriplet(arr,n,sum);

	}

}
