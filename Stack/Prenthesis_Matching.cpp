#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int size;
	int top;
	char * arr;
};

int isEmpty(struct Stack* ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Stack* ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct Stack* ptr,char value){
	if(isFull(ptr)){
		printf("Stack overflow");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=value;
	}
}

char pop(struct Stack* ptr){
	if(isEmpty(ptr)){
		printf("Stack underflow");
		return -1;
	}
	else{
		char value=ptr->arr[ptr->top];
		ptr->top=ptr->top-1;
		return value;
	}
}

int parenthesismatch(char * exp){
	struct Stack* s=(struct Stack *)malloc(sizeof(struct Stack));
	s->size=200;
	s->top=-1;
	s->arr=(char *)malloc(s->size*sizeof(char));
	
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push(s,'(');
		}
		else if(exp[i]==')'){
			if(isEmpty(s)){
				return 0;
			}
			pop(s);
		}
	}	
	if(isEmpty(s)){
		return 1;
	}
	else{
		return 0;
	}	
}

int main(){
	char* exp="(3*(9-7)";
	
	if(parenthesismatch(exp)){
		printf("Parenthesis Match");
	}
	else{
		printf("Parenthesis Does Not Match");
	}
	
}

