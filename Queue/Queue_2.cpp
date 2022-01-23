#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* front=NULL;
struct Node* rear=NULL;

void display(){
	struct Node* ptr=front;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

int isfull(){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	if(ptr==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int isempty(){
	if(front==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(int data){
	struct Node* p=(struct Node*)malloc(sizeof(struct Node));
	if(isfull()){
		printf("Queue is full\n");
	}
	else{
		p->data=data;
		p->next=NULL;
		if(front==NULL){
			front=rear=p;
		}
		else{
			rear->next=p;
			rear=p;
		}
		printf("enqueued : %d\n",data);
	}
}

int dequeue(){
	int a=-1;
	struct Node* ptr=front;
	if(isempty()){
		printf("queue is empty");
	}
	else{
		front=front->next;
		a=ptr->data;
		free(ptr);
	}
	return a;
}

int main(){
	//insertion
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	
	printf("\nQueue After insertion :\n");
	display();
	
	//deletion
	printf("\n\ndequeued element = %d",dequeue());
	printf("\ndequeued element = %d\n",dequeue());
	

	printf("\nQueue After deletion :\n");
	display();
}
