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

int main(){
	struct Queue* q=(struct Queue*)malloc(sizeof(struct Queue));
	q->size=10;
	q->front=q->rear=-1;
	q->arr=(int*)malloc(q->size*sizeof(int));
	
	int node;
	int i=3;
	int visited[7]={0,0,0,0,0,0,0};
	
	int a[7][7]={{0,1,1,1,0,0,0},
	             {1,0,1,0,0,0,0},
	             {1,1,0,1,1,0,0},
	             {1,0,1,0,1,0,0},
	             {0,0,1,1,0,1,1},
	             {0,0,0,0,1,0,0},
	             {0,0,0,0,1,0,0}
	};
	printf("%d ",i);
	visited[i]=1;
	enqueue(q,i);
	while(!isEmpty(q)){
		int node=dequeue(q);
		for(int j=0;j<7;j++){
			if(a[node][j]==1 && visited[j]==0){
				printf("%d ",j);
				visited[j]=1;
				enqueue(q,j);
			}
		}
	}		
}
