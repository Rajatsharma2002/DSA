#include<stdio.h>

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int partition(int arr[],int low,int high){
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	int temp;
	do{
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}while(i<j);
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return j;
	
}

void quicksort(int arr[],int low,int high){
	int partitionindex;
	
	if(low<high){
		partitionindex=partition(arr,low,high);
		quicksort(arr,low,partitionindex-1);
		quicksort(arr,partitionindex+1,high);
	}
}

int main(){
	int arr[]={4,6,2,1,9,7};
	int n=sizeof(arr)/sizeof(int);
	
	printarray(arr,n);
	quicksort(arr,0,n-1);
	printarray(arr,n);
}

/*quick sort - time complexity worst case(when array is sorted)=O(n^2)
                             best case(when pivot is at center)=O(nlogn)
			     average case=O(nlogn)
                             quick sort not stable
                             quick sort is inplace algorithm*/
