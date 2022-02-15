package DSA;
import java.util.*;

public class ChocolateDistributionProblem {
	
	static int minimumdiff(int arr[],int n,int m) {
		int diff , mindiff = Integer.MAX_VALUE;
		if(m>n) {
			return -1;
		}
		if(m==0 || n==0) {
			return 0;
		}
		
		Arrays.sort(arr);
		for(int i=0;i+m-1<n;i++) {
			diff = arr[i+m-1]-arr[i];
			if(diff<mindiff) {
				mindiff = diff;
			}
		}
		return mindiff;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
		int n = arr.length;
		
		System.out.println("Enter Number of Students : ");
		int m = sc.nextInt();
		
		System.out.println("Minimum Difference (between higher and lower value): "+minimumdiff(arr,n,m));
		
		sc.close();
		}

	}


