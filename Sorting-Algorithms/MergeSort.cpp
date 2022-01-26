#include<stdio.h>

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void merge(int arr[],int low,int mid,int high){
	int i=low;
	int j=mid+1;
	int k=low;
	int A[100];
	
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			A[k]=arr[i];
			i++;
			k++;
		}
		else{
			A[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		A[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high){
		A[k]=arr[j];
		j++;
		k++;
	}
	for(int i=low;i<=high;i++){
		arr[i]=A[i];
	}
}

void mergesort(int arr[],int low,int high){
	int mid;
	
	if(low<high){
		mid=(low + high) / 2;
		
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}	
}

int main(){
	int arr[]={50,20,10,60,90,80};
	int n=sizeof(arr)/sizeof(int);

	printarray(arr,n);
	mergesort(arr,0,n-1);
	printarray(arr,n);
}


