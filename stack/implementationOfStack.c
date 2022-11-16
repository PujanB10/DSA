#include<stdio.h>

int stack[100],top=-1,n;
void push(){
    int value;
    if(top == (n-1)){
        printf("Stack overflow\n");
    }
    else{
        printf("Enter the value to be pushed::");
        scanf("%d",&value);
        top +=1;
        stack[top] = value;
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        top -= 1;
    }
}

void display(){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }   
    if(top == -1){
        printf("The stack is empty\n");
    }
    }


int main(){
    int choice=0;
    printf("Enter the number of elements in the stack::");
    scanf("%d",&n);
    while(choice!=4){
        printf("Choose one from the below option");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice::");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting..");
                break;
            default:
                printf("Please enter a valid choice"); 
        }
    }
}