#include<stdio.h>
#include<stdlib.h>

struct Queue{
	int size;
	int front;
	int rear;
	int* arr;
};

void display(struct Queue* q){
	for(int i=q->front+1;i<=q->rear;i++){
		printf("%d ",q->arr[i]);
	}
}

int isFull(struct Queue* q){
	if(q->rear==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(struct Queue* q){
	if(q->front==q->rear){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(struct Queue* q,int value){
	if(isFull(q)){
		printf("Queue overflow");
	}
	else{
		q->rear++;
		q->arr[q->rear]=value;
	}
}

int dequeue(struct Queue* q){
	if(isEmpty(q)){
		printf("Queue Underflow");
	}
	else{
		q->front++;
		int a=q->arr[q->front];
		return a;
	}
}

//int dequeue(struct Queue* q){
//	int a=-1;
//	if(isEmpty(q)){
//		printf("Queue Underflow");
//	}
//	else{
//		q->front++;
//		a=q->arr[q->front];
//	}
//	return a;
//}


int main(){
	struct Queue* q=(struct Queue*)malloc(sizeof(struct Queue));
	q->size=10;
	q->front=q->rear=-1;
	q->arr=(int*)malloc(q->size*sizeof(int));
	
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	enqueue(q,40);
	enqueue(q,50);
	enqueue(q,60);
	enqueue(q,70);
	enqueue(q,80);
	
	display(q);
	
	printf("\nValue deleted = %d",dequeue(q));
	printf("\nValue deleted = %d\n",dequeue(q));
	
	display(q);
	
}
