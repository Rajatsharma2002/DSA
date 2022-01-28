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

void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
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

void insert(struct node* root,int val){
	struct node* prev=NULL;
	
	while(root!=NULL){
		prev=root;
		if(root->data==val){
			printf("Element %d Already exists\n",val);
			return;
		}
		else if(root->data>val){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	struct node* n=createnode(val);
	if(val<prev->data){
		prev->left=n;
	}
	else{
		prev->right=n;
	}
	printf("Element %d inserted in Tree\n",val);
}

struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }
    
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main(){
	struct node* a1=createnode(4);
	struct node* a2=createnode(2);
	struct node* a3=createnode(6);
	struct node* a4=createnode(1);
	struct node* a5=createnode(3);
	
	link(a1,a2,a3);
	link(a2,a4,a5);
		
//	insert(a1,1);
//	insert(a1,10);
//	insert(a1,5);
     
    inorder(a1);
	deleteNode(a1,4);
	printf("\n");
	inorder(a1);

}
