package DSA;

public class threewaypart {
	
	static void partition(int arr[],int n,int low,int high) {
		int start = 0;
		int end = n-1;
		int temp;
		
		for(int i=0;i<end;) {
			if(arr[i]<low) {
				if(i==start) {
					start++;
					i++;
				}
				else {
					temp = arr[i];
					arr[i] = arr[start];
					arr[start] = temp;
					start++;
					i++;
				}
			}
			else if(arr[i]>high){
				temp = arr[i];
				arr[i] = arr[end];
				arr[end] = temp;
				end--;
			}
			else {
				i++;
			}
		}
	}

	public static void main(String[] args) {
		int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
		int n = arr.length;
		
		int low = 10;
		int high = 20;
		
        System.out.println("Array Befor Modification : ");
        for (int i=0; i < n; i++){
            System.out.print(arr[i] + " ");
        } 
		
		partition(arr,n,low,high);
		
		System.out.println("\n\nArray After Modification :");
		
        for (int i=0; i < n; i++){
            System.out.print(arr[i] + " ");
        }   
	}

}
