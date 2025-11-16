#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <conio.h>

struct stack{
	int data;
	struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);
int peek (struct stack *);

int main(){
	
	int option , val;
	
	do{
		printf("\nEnter any opetion and enter 0 to exit\n");
		printf("1. push()\n2. pop()\n3.display()\n4.peek()\n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				printf("Enter value to insert in stack\n");
				scanf("%d",&val);
				
				top = push(top,val);
				break;
			
			case 2:
				top = pop(top);
				break;
			
			case 3:
				top = display(top);
				break;
				
			case 4:
				val = peek(top);
				if(val== -1){
					printf("Stack is empty\n");
				}
				else{
					printf("Value is: %d", val);
				}
				break;			
		}	
	}while(option != 0);
	
	return 0;
}

struct stack *push(struct stack *top, int val)
{
	struct stack *ptr;
	ptr = (struct stack *) malloc (sizeof(struct stack));
	ptr->data = val;
	
	if( top == NULL ){
		ptr -> next = NULL;
		top = ptr;
	}
	else{
		ptr->next = top;
		top = ptr;
	}
	
	return top;
}

struct stack *pop(struct stack *top){
	struct stack *ptr;
	ptr = top;
	if(top == NULL){
		printf("Underflow\n");
	}
	else{
		top = top->next;
		free(ptr);
	}
	return top;	
}

struct stack *display(struct stack *top){
	struct stack *ptr;
	ptr = top;
	if( top == NULL ){
		printf("stack is empty\n");
	}
	else{
		
		while( ptr != NULL){
			printf("\n %d", ptr -> data);
			ptr = ptr->next;
		}
	}
	return top;
}

int peek(struct stack *top){
	if( top == NULL ){
		printf("Stack is empty\n");
		return -1;
	}
	else {
		return top->data;
	}
	
}
