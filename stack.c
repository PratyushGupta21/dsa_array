#include<stdio.h>
#include<stdlib.h>
#define max 100
int a[max];
int top=-1;
int push()
{
    int n;
    if(top==max-1)
    {
        printf("the stack is overflow\n");
    }
    else{
        printf("enter the number:\n");
        scanf("%d",&n);
        top++;
        a[top]=n;
    }
}
int pop()
{
    int d;
    if(top==-1)
    {
        printf("the stack is underflow!\n");
    }
    else{
        d=a[top];
        printf("the number you deleted is :%d",d);
        top--;
    }
}
int display()
{
    int i;
    if(top==-1)
    printf("the stack is empty!\n");
    else
    {
         printf("the numbers you entered are:\n");
         for(i=0;i<=top;i++)
         printf("%d",a[i]);
    }
    printf("\n");
}
int main()
{
    int c;
    do
    {
    printf("******STACK******\n");
    printf("enter your choice:\n");
    printf("press 1 to push an element in stack\n");
    printf("press 2 to pop an element from stack\n");
    printf("press 3 to display the elements you entered\n");
    printf("press 4 to exit the program\n");
    scanf("%d",&c);
        switch(c)
        {
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
        printf("you are exiting the code\n ");
        break;
        default:
        printf("the number you entered is not in the choice!\n");
        }
    }while(c!=4);
    return 0;
}
