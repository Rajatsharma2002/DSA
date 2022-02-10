package DSA;

public class MedianofArray {
	
	static int median(int arr1[],int arr2[],int n,int m) {
		int i = 0,j = 0;
		int m1 = -1,m2 = -1;
		
		if((n+m)%2==0) {
			for(int count = 0;count<=(n+m)/2;count++) {
				m2 = m1;
				if(i!=n && j!=m) {
					m1 = (arr1[i]>arr2[j]) ? arr2[j++] : arr1[i++];
				}
				else if(i!=n) {
					m1 = arr1[i++];
				}
				else {
					m1 = arr2[j++];
				}
			}
			return (m1+m2)/2;
		}
		
		else {
			for(int count = 0;count<=(n+m)/2;count++) {
				if(i!=n && j!=m) {
					m1 = (arr1[i]>arr2[j]) ? arr2[j++] : arr1[i++];
				}
				else if(i!=n) {
					m1 = arr1[i++];
				}
				else {
					m1 = arr2[j++];
				}
			}
			return m1;
		}
	}

	public static void main(String[] args) {
		int arr1[] = {2, 3, 5, 8};
		int arr2[] = {10, 12, 14, 16, 18, 20};
		int n = arr1.length;
		int m = arr2.length;
		
		System.out.println("Median of 2 Sorted Arrays : "+median(arr1,arr2,n,m));
	}

}
