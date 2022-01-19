#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void CLL_traversal(struct Node* head){
	struct Node* ptr=head;
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}

//insertion at begining
struct Node* insertatbeg(struct Node* head,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node* p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}

//insertion at end
struct Node* insertatend(struct Node* head,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node* p=head;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	return head;
}

//insertion at particular index
struct Node* insertatindex(struct Node* head,int data,int index){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node* p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
}

//insertion after a node
struct Node* insertafternode(struct Node* head,int data,struct Node* p){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}

int main(){
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* second=(struct Node*)malloc(sizeof(struct Node));
	struct Node* third=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=head;
	
	printf("Circular linked list before insertion at begining : ");
	CLL_traversal(head);
	
	head=insertatbeg(head,5);
//	head=insertatbeg(head,1);
	printf("\nCircular linked list after insertion at begining : ");
	CLL_traversal(head);
	
	head=insertatend(head,50);
//	head=insertatend(head,55);
	printf("\nCircular linked list after insertion at end : ");
	CLL_traversal(head);
	
	head=insertatindex(head,25,1);
	printf("\nCircular linked list after insertion at specified index : ");
	CLL_traversal(head);
	
	head=insertafternode(head,35,third);
	printf("\nCircular linked list after insertion after particular node : ");
	CLL_traversal(head);
		
}
