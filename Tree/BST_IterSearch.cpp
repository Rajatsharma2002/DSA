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

int isBST(struct node* root){
	static struct node* prev=NULL;
	if(root!=NULL){
		if(!isBST(root->left)){
			return 0;
		}
		if(prev!=NULL && root->data<=prev->data){
			return 0;
		}
		prev=root;
		isBST(root->right);
	}
	else{
		return 1;
	}
}

struct node* search(struct node* root,int val){
	while(root!=NULL){
		if(root->data==val){
			return root;
		}
		else if(root->data>val){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	return NULL;
}

int main(){
	struct node* a1=createnode(4);
	struct node* a2=createnode(2);
	struct node* a3=createnode(6);
	struct node* a4=createnode(1);
	struct node* a5=createnode(3);
	
	link(a1,a2,a3);
	link(a2,a4,a5);
	
	struct node* output=search(a1,6);
	
	if(output!=NULL){
		printf("Element %d Found",output->data);
	}
	else{
		printf("Element not Found");
	}	
}
