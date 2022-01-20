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

void isEmpty(struct Stack* ptr){
	if(ptr->top==-1){
		printf("Stack is Empty");
	}
	else{
		printf("Stack is Not Empty");
	}
}

void isFull(struct Stack* ptr){
	if(ptr->top==ptr->size-1){
		printf("Stack is Full");
	}
	else{
		printf("Stack is Not Full");
	}
}

int main(){
	struct Stack* s = (struct Stack *)malloc(sizeof(struct Stack));
	s->size=5;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int));
	
	s->arr[0]=10;
	s->top++;
	
	s->arr[1]=20;
	s->top++;
	
	s->arr[2]=30;
	s->top++;
	
	s->arr[3]=40;
	s->top++;
	
	s->arr[4]=50;
	s->top++;
	
//	isEmpty(s);
//	isFull(s);
	display(s);
	
}


