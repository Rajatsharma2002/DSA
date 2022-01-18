#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void lltraversal(struct Node* ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

struct Node* insertionbegining(struct Node* head,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=head;
	head=ptr;	
	return head;
}

struct Node* insertionindex(struct Node* head,int data,int index){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node* p=head;
	ptr->data=data;
	int i=0;
	while(i!=index){
		p=p->next;
		i=i+1;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
}

struct Node* insertionafternode(struct Node* head,struct Node* prev,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=prev->next;
	prev->next=ptr;
	return head;
}

struct Node* insertionend(struct Node* head,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node* p=head;
	ptr->data=data;
	
	while(p->next!=NULL){
		p=p->next;
	}
	ptr->next=NULL;
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
	fourth->next=NULL;
	
	printf("Linked list before insertion : ");
	lltraversal(head);
	
	printf("\nLinked list after insertion at begining : ");
	head=insertionbegining(head,0);
	lltraversal(head);
	
	printf("\nLinked list after insertion at particular index : ");
	head=insertionindex(head,35,3);
	lltraversal(head);
	
	printf("\nLinked list after insertion at end : ");
	head=insertionend(head,50);
	lltraversal(head);
	
	printf("\nLinked list after insertion after a node : ");
	head=insertionafternode(head,second,25);
	lltraversal(head);
	
}
