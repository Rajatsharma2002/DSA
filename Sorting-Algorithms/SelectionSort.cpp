#include<stdio.h>

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void selectionsort(int arr[],int n){
	printf("Sorted Array : ");
	int minindex,temp;
	for(int i=0;i<n-1;i++){
		minindex=i;
		for(int j=i+1;j<n-1;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}

int main(){
	int arr[]={4,6,2,1,9,7};
	int n=sizeof(arr)/sizeof(int);
	
	printarray(arr,n);
	selectionsort(arr,n);
	printarray(arr,n);
	
//Selection sort - time complexity = O(n^2) and it is niether adaptive and nor stable
}
