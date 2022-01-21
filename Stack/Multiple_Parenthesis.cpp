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

int match(char a,char b){
	if(a=='(' && b==')'){
		return 1;
	}
	if(a=='{' && b=='}'){
		return 1;
	}
	if(a=='[' && b==']'){
		return 1;
	}
	return 0;
	
}
int parenthesismatch(char * exp){
	struct Stack* s=(struct Stack *)malloc(sizeof(struct Stack));
	s->size=200;
	s->top=-1;
	s->arr=(char *)malloc(s->size*sizeof(char));
	char value;
	
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
			push(s,exp[i]);
		}
		else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
			if(isEmpty(s)){
				return 0;
			}
			value=pop(s);
			if(!match(value,exp[i])){
				return 0;
			}
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
	char* exp="{3*[(9-7)}";
	
	if(parenthesismatch(exp)){
		printf("Parenthesis Balanced");
	}
	else{
		printf("Parenthesis is Not Balanced");
	}
	
}

