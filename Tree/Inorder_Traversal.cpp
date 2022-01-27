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

void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}


int main(){
	struct node* a1=createnode(4);
	struct node* a2=createnode(1);
	struct node* a3=createnode(6);
	struct node* a4=createnode(5);
	struct node* a5=createnode(2);
//	struct node* a6=createnode(10);
	
	link(a1,a2,a3);
	link(a2,a4,a5);
//	link(a3,a6,NULL);
	
	printf("Pre-order Trversal = ");
	preorder(a1);
	
	printf("\nPost-order Trversal = ");
	postorder(a1);
	
	printf("\nIn-order Trversal = ");
	inorder(a1);
	
}
