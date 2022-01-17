#include<stdio.h>
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void insert(int arr[],int size,int element,int index , int capacity){
	int flag=0;
	if(size==capacity){
		printf("\nArray is full");
//		printf("Insertion Failed");
	}
	
	else{
		for(int i=size-1;i>=index;i--){
			arr[i+1]=arr[i];
		}
		arr[index]=element;
		flag=1;
		if(flag==1){
			size+=1;
			printf("\n");
			printf("Insertion Successful Modified Array is : \n");
			display(arr,size);
		}
		else{
			printf("Insertion Failed");
		}
	}
	
}
int main(){
	int arr[100]={1,4,7,2,9};
	int size=5;
	int element=30 , index=2;
	display(arr,size);
	insert(arr,size,element,index);
//	size+=1;
//	display(arr,size);	
}
