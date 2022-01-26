#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int maximum(int arr[],int n){
	int max=INT_MIN;
	
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		return max;
	}
}
void countsort(int arr[],int n){
	int i,j;
	int max=maximum(arr,n);
	int* count=(int*)malloc((max+1)*sizeof(int));
	
	for(i=0;i<=max;i++){
		count[i]=0;
	}
	for(i=0;i<n;i++){
		count[arr[i]]=count[arr[i]]+1;
	}
	i=j=0;
	while(i<=max){
		if(count[i]>0){
			arr[j]=i;
			count[i]-=count[i];
			j++;
		}
		else{
			i++;
		}
	}
}


int main(){
	int arr[]={50,20,10,60,90,80};
	int n=sizeof(arr)/sizeof(int);

	printarray(arr,n);
	countsort(arr,n);
	printarray(arr,n);
}


