#include<stdio.h>
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

//void insert(int arr[],int size,int element,int index , int capacity){
//	int flag=0;
//	if(size==capacity){
//		printf("\nArray is full");
////		printf("Insertion Failed");
//	}
//	
//	else{
//		for(int i=size-1;i>=index;i--){
//			arr[i+1]=arr[i];
//		}
//		arr[index]=element;
//		flag=1;
//		if(flag==1){
//			size+=1;
//			printf("\n");
//			printf("Insertion Successful Modified Array is : \n");
//			display(arr,size);
//		}
//		else{
//			printf("Insertion Failed");
//		}
//	}
//	
//}

void del(int arr[],int index,int size){
	if(index>size-1){
		printf("\nIndex not found");
	}
	else{
		for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
		}
		printf("\n");
		size-=1;
		printf("Deletion Successful Modified Array is : \n");
		display(arr,size);
	}
}

int main(){
	int arr[100]={7,8,12,27,88};
	int size=5;
	int element=30 , index=2;
	display(arr,size);
//	insert(arr,size,element,index);
//	size+=1;
//	display(arr,size);	
	del(arr,index,size);
}
