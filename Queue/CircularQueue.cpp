#include<stdio.h>
#include<stdlib.h>

struct CircularQueue{
	int size;
	int front;
	int rear;
	int* arr;
};

int isEmpty(struct CircularQueue* q){
	if(q->front==q->rear){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct CircularQueue* q){
	if(((q->rear+1)%q->size)==q->front){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(struct CircularQueue* q,int value){
	if(isFull(q)){
		printf("Queue overflow\n");
	}
	else{
		q->rear=(q->rear+1)%q->size;
		q->arr[q->rear]=value;
		printf("Enqueued Element : %d\n",value);
	}
}

int dequeue(struct CircularQueue* q){
	int a=-1;
	if(isEmpty(q)){
		printf("Queue Underflow\n");
	}
	else{
		q->front=(q->front+1)%q->size;
		a=q->arr[q->front];
	}
	return a;
}

int main(){
	struct CircularQueue* q=(struct CircularQueue*)malloc(sizeof(struct CircularQueue));
	q->size=5;
	q->front=q->rear=0;
	q->arr=(int*)malloc(q->size*sizeof(int));
	
//	only size-1 number of elements can be enqued in a queue because one space will be taken by 0(in line 54)
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	enqueue(q,40);
	enqueue(q,50); //size-1 element has already enqued so it will show queue full
	
	printf("\nValue deleted = %d",dequeue(q));
	printf("\nValue deleted = %d\n",dequeue(q));
	
	enqueue(q,50);	
	
}


