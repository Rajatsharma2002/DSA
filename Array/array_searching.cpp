#include<stdio.h>
//time complexity O(n)
int linearsearch(int arr[],int element,int size){
	for(int i=0;i<size;i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
}

//Time complexity O(log(n))
//binary search only works on sorted array
int binarysearch(int arr[],int element,int size){
	int low,mid,high;
	low=0;
	high=size-1;
	
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid]>element){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int element=4;
	int size=sizeof(arr)/sizeof(int);
	int result1=linearsearch(arr,element,size);
	printf("The element %d is at index %d",element,result1);
	
	int result2=binarysearch(arr,element,size);
	printf("\nThe element %d is at index %d",element,result2);
	
}
