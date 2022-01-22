#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stack{
	int size;
	int top;
	char * arr;
};

int stacktop(struct Stack* sp){
    return sp->arr[sp->top];
}

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
int precedence(char c){
	if(c=='/'||c=='*'){
		return 2;
	}
	else if(c=='+'||c=='-'){
		return 1;
	}
	else{
		return 0;
	}
}

int isoperator(char c){
	if(c=='+'||c=='/'||c=='-'||c=='*'){
		return 1;
	}
	else{
		return 0;
	}
}

char* InfixtoPostfix(char* infix){
	struct Stack* s=(struct Stack*)malloc(sizeof(struct Stack));
	s->size=100;
	s->top=-1;
	s->arr=(char*)malloc(s->size*sizeof(char));
	char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
	
	int i=0;
	int j=0;
	while(infix[i]!='\0'){
		if(!isoperator(infix[i])){
			postfix[j]=infix[i];
			j++;
			i++;
		}
		else{
			if(precedence(infix[i])>precedence(stacktop(s))){
				push(s,infix[i]);
				i++;
			}
			else{
				postfix[j]=pop(s);
				j++;
			}
		}
	}
	while(!isEmpty(s)){
		postfix[j]=pop(s);
		j++;
	}
	postfix[j]='\0';
	return postfix;	
}

int main(){
	char* infix="x-y/z-k*d";
	printf("Postfix conversion is %s",InfixtoPostfix(infix));	
}

