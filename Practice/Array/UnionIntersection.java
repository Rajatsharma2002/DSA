package DSA;

public class UnionIntersection {
	
	static void union(int arr1[],int arr2[],int n,int m) {
		int index1=0;
		int index2=0;
		
		System.out.println("Union of 2 sorted arrays :");
		while(index1<n && index2<m) {
			if(arr1[index1]<arr2[index2]) {
				System.out.println(arr1[index1]+" ");
				index1++;
			}
			if(arr2[index2]<arr1[index1]) {
				System.out.println(arr2[index2]+" ");
				index2++;
			}
			if(arr1[index1]==arr2[index2]) {
				System.out.println(arr1[index1]+" ");
				index1++;
				index2++;
			}
		}
		while(index1<n) {
			System.out.println(arr1[index1]+" ");
			index1++;
		}
		while(index2<m) {
			System.out.println(arr2[index2]+" ");
			index2++;
		}
	}
	
	static void intersection(int arr1[],int arr2[],int n,int m) {
		int index1=0;
		int index2=0;
		
		System.out.println("Intersection of 2 sorted arrays :");
		while(index1<n && index2<m) {
			if(arr1[index1]<arr2[index2]) {
				index1++;
			}
			if(arr2[index2]<arr1[index1]) {
				index2++;
			}
			if(arr1[index1]==arr2[index2]) {
				System.out.println(arr1[index1]+" ");
				index1++;
				index2++;
			}
		}
	}

	public static void main(String[] args) {
		int[] arr1= {1,2,3,4,5};
		int[] arr2= {4,5,6,7};
		int n=arr1.length;
		int m=arr2.length;
		
		union(arr1,arr2,n,m);
		
		intersection(arr1,arr2,n,m);
	}

}
