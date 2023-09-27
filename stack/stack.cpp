#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void push(int);
void pop(void);

int stack[MAX_SIZE], top = 0;

int main(void)
{
  /* push(0);  
   push(0);    
    push(5);                      
    pop();         
    pop();                 
    push(3);
    push(4);
    pop();
    pop();
    pop();    */
    push(5);
    push(6);  
    push(0);
    pop();
    pop();
    pop();        
    
	push(6);
	pop();
	
    
}

void push(int data)
{
    if (top == MAX_SIZE)
    {
        printf("The stack is full!\n");
    }
    else
    {
        stack[top++] =data;
    }
}

void pop(void)
{
    if (top == 0)
    {
        printf("The stack is empty!\n");
    }
    else
    {
        printf("%d\n", stack[--top]);     /*[--top] 先減少再做事*/ 
    }                                                
}
