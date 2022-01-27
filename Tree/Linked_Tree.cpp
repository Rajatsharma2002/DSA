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

int main(){
	struct node* a1=createnode(4);
	struct node* a2=createnode(1);
	struct node* a3=createnode(6);
	struct node* a4=createnode(5);
	struct node* a5=createnode(2);
	
//	a1->left=a2;
//	a1->right=a3;
	
	link(a1,a2,a3);
	link(a2,a4,a5);
	
}
