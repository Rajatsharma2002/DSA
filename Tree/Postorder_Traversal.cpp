#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createnode(int data){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}

void link(struct node* a,struct node* b,struct node* c){
	a->left=b;
	a->right=c;
}

void preorder(struct node* root){
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

int main(){
	struct node* a1=createnode(4);
	struct node* a2=createnode(1);
	struct node* a3=createnode(6);
	struct node* a4=createnode(5);
	struct node* a5=createnode(2);
	
	link(a1,a2,a3);
	link(a2,a4,a5);
	
	printf("Pre-order Trversal = ");
	preorder(a1);
	
	printf("\nPost-order Trversal = ");
	postorder(a1);
	
}
