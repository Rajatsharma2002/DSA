#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

//time complexity O(n)
void lltraversal(struct Node* ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

//deletion from begining
//time complexity O(1)
struct Node* deletionbegining(struct Node* head){
	struct Node* ptr=head;
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
	while(ptr->next!=NULL){
		ptr=ptr->next;
		prev=prev->next;
	}
	prev->next=NULL;
	free(ptr);
	return head;
}

//deletion of particular value
struct Node* deletionvalue(struct Node* head,int value){
	struct Node* ptr=head;
	struct Node* q=head->next;
	while(q->data!=value && q->next!=NULL){
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
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=NULL;
	
	printf("Linked list before deletion : ");
	lltraversal(head);
	
//	printf("\nLinked list after deletion from begining : ");
//	head=deletionbegining(head);
//	lltraversal(head);
//	
//	printf("\nLinked list after deletion at particular index : ");
//	head=deletionatindex(head,2);
//	lltraversal(head);
//	
//	printf("\nLinked list after deletion from end : ");
//	head=deletionend(head);
//	lltraversal(head);

	printf("\nLinked list after deletion of particular value : ");
	head=deletionvalue(head,20);
	lltraversal(head);
		
}
