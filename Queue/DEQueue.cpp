#include<stdio.h>
#include<stdlib.h>

struct queue{
	int size;
	int front;
	int rear;
	int* arr;
};

void display(struct queue* q){
	for(int i=q->front+1;i<=q->rear;i++){
		printf("Value at %d is %d\n",i,q->arr[i]);
	}
}

int isfull(struct queue* q){
	if(q->rear==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isempty(struct queue* q){
	if(q->front==q->rear){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueueR(struct queue* q,int value){
	if(isfull(q)){
		printf("Queue is full\n");
	}
	else{
		q->rear++;
		printf("Enqueued Element : %d\n",value);
		q->arr[q->rear]=value;
	}
}

void enqueueF(struct queue* q,int value){
	if(q->front==-1){
		printf("Cannot enqueue at this place\n");
	}
	else{
		q->arr[q->front]=value;
		printf("Enqueued Element : %d\n",value);
		q->front--;
	}
}

int dequeueF(struct queue* q){
	int a=-1;
	if(isempty(q)){
		printf("Queue is empty\n");
	}
	else{
		q->front++;
		a=q->arr[q->front];
	}
	return a;
}

int dequeueR(struct queue* q){
	int a=-1;
	if(isempty(q)){
		printf("Queue is empty\n");
	}
	else{
		a=q->arr[q->rear];
		q->rear--;
	}
	return a;
}

int main(){
	struct queue* q=(struct queue*)malloc(sizeof(struct queue));
	q->size=10;
	q->front=q->rear=-1;
	q->arr=(int*)malloc(q->size*sizeof(int));
	
	enqueueR(q,10);
	enqueueR(q,20);
	enqueueR(q,30);
	enqueueR(q,40);
	enqueueR(q,50);
	
	display(q);
	
	printf("Dequeued element From front : %d\n",dequeueF(q));
	printf("Dequeued element From rear : %d\n",dequeueR(q));
	
	display(q);
	
	enqueueF(q,60);
	display(q);
}
