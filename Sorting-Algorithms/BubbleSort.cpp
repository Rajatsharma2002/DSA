#include<stdio.h>

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//simple bubble sort 
void bubblesort(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		printf("Pass : %d\n",i+1);
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

//adaptive bubble sort , faster than simple bubble sort 
void adaptiveBS(int arr[],int n){
	int temp;
	int sortedarr=0;
	for(int i=0;i<n-1;i++){
		printf("Pass : %d\n",i+1);
		sortedarr=1;
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sortedarr=0;
			}
		}
		if(sortedarr){
			return;
		}
	}
}

int main(){
//	int arr[]={1,2,3,4,5,6};
	int arr[]={4,5,1,2,8,3};
	
	int n=sizeof(arr)/sizeof(int);
	
	printarray(arr,n);
	
	bubblesort(arr,n); 
//	adaptiveBS(arr,n);
	
	printarray(arr,n);
	
//bubble sort - O(n^2) , stable , by default not adaptive but can be made adaptive
}
