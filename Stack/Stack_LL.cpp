#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* top=NULL;

void traversal(struct Node* ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int isEmpty(struct Node* top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Node* top){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	if(ptr==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

struct Node* push(struct Node* top,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	if(isFull(top)){
		printf("Stack Overflow\n");
	}
	else{
		ptr->next=top;
		top=ptr;
		return top;
	}
}

int pop(struct Node* T){
	struct Node* ptr=T;
	if(isEmpty(T)){
		printf("Stack Underflow\n");
	}
	else{
		top=T->next;
		int a=ptr->data;
		free(ptr);
		return a;
	}
}

int main(){
	int value;
	
	top=push(top,10);
	top=push(top,20);
	top=push(top,30);
	top=push(top,40);
	top=push(top,50);
	
	traversal(top);
	
	value=pop(top);
	printf("\nPopped Value is %d\n",value);
	value=pop(top);
	printf("Popped Value is %d\n",value);
	
	traversal(top);	
}


