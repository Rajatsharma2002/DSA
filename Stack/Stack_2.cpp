#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int size;
	int top;
	int * arr;
};

void display(struct Stack* ptr){
	for(int i=0;i<=ptr->top;i++){
		printf("%d ",ptr->arr[i]);
	}
}

int isEmpty(struct Stack* ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Stack* ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct Stack* ptr,int value){
	if(isFull(ptr)){
		printf("Stack overflow");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=value;
	}
}

int pop(struct Stack* ptr){
	if(isEmpty(ptr)){
		printf("Stack underflow");
		return -1;
	}
	else{
		int value=ptr->arr[ptr->top];
		ptr->top=ptr->top-1;
		return value;
	}
}

int main(){
	struct Stack* s = (struct Stack *)malloc(sizeof(struct Stack));
	s->size=10;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int));
	
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	push(s,50);
	push(s,60);
	display(s);
	
	printf("\nTop = %d",s->arr[s->top]);
	printf("\nPopped %d From stack",pop(s));
	printf("\nPopped %d From stack",pop(s));
}
