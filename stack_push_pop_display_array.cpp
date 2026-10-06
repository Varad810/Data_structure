#include<stdio.h>
#define MAX 5
void push(int value);
void pop();
void display();

int stack[MAX];
int top = -1;

int main()
{
	int choice, value;
	
	while (1)
	{
		printf("\n Menu \n");
		printf("1) Push \n");
		printf("2) Pop \n");
		printf("3) Display stack \n");
		printf("4) Exit \n");
		
		printf("Enter your choice ");
        scanf("%d", &choice);

	
		
		switch (choice) 
		{
            case 1:
                printf("Enter value to be Inserted: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exit program\n");
                return 0;

            default:
                printf("Invalid choice \n");
        	} 
    }
}

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into the stack \n", value);
    }
}


void pop()
{
    if (top == -1)
    {
        printf("Stack is Underflow \n");
    }
    else
    {
        printf("%d popped from stack \n", stack[top]);
        top--;
    }
}

void display(){
	int i;
	if (top == -1){
		printf("stack is empty");
	}
	else{
        printf("Stack is \n");

        for (i = 0; i <= top; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}


