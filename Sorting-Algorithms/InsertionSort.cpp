#include<stdio.h>

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void insertionsort(int arr[],int n){
	int a,j;
	for(int i=1;i<=n-1;i++){
		a=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>a){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=a;
	}
}

int main(){
	int arr[]={4,5,1,2,8,3};
	int n=sizeof(arr)/sizeof(int);
	
	printarray(arr,n);
	insertionsort(arr,n);
	printarray(arr,n);
	
//insertion sort - worst case = O(n^2),stable and adaptive
}
