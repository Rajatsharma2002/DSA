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

//deletion from begining
struct Node* deletionbegining(struct Node* head){
	struct Node* ptr=head;
	struct Node* p=head;
	while(p->next!=head){
		p=p->next;
	}
	p->next=head->next;
	head=head->next;
	free(ptr);
	return head;
}

//deletion from particular index
struct Node* deletionatindex(struct Node* head,int index){
	struct Node*ptr=head;
	int i=0;
	while(i!=index-1){
		ptr=ptr->next;
		i=i+1;
	}
	struct Node* q=ptr->next;
	ptr->next=q->next;
	free(q);
	return head;
}

//deletion from end
struct Node* deletionend(struct Node* head){
	struct Node* ptr=head->next;
	struct Node* prev=head;
	while(ptr->next!=head){
		ptr=ptr->next;
		prev=prev->next;
	}
	prev->next=head;
	free(ptr);
	return head;
}

//deletion of particular value
struct Node* deletionvalue(struct Node* head,int value){
	struct Node* ptr=head;
	struct Node* q=head->next;
	while(q->data!=value && q->next!=head){
		ptr=ptr->next;
		q=q->next;
	}
	if(q->data==value){
		ptr->next=q->next;
		free(q);
	}
	return head;	
}

int main(){
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* second=(struct Node*)malloc(sizeof(struct Node));
	struct Node* third=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fifth=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=fifth;
	
	fifth->data=50;
	fifth->next=head;
	
	printf("Circular linked list before deletion : ");
	CLL_traversal(head);
	
	head=deletionbegining(head);
	printf("\nCircular linked list after deletion at begining : ");
	CLL_traversal(head);
	
	head=deletionend(head);
	printf("\nCircular linked list after deletion from end : ");
	CLL_traversal(head);
	
	head=deletionatindex(head,1);
	printf("\nCircular linked list after deletion from specified index : ");
	CLL_traversal(head);
	
	head=deletionvalue(head,30);
	printf("\nCircular linked list after deletion of particular value : ");
	CLL_traversal(head);
}
