#include<stdio.h>
#include<stdlib.h>
#define max 100
int a[max];
int rear=-1;
int front=0;
int enqueu()
{
    int d;
    if(rear==max-1)
    {
        printf("the queue is overflow\n");
    }
    else{
        printf("enter the number to be entered:\n");
        scanf("%d",&d);
        rear++;
        a[rear]=d;
    }
}
int dequeue()
{
    int n;
    if(front>rear)
    printf("the queue is underflow\n");
    else{
        n=a[front];
        printf("deleted number is:%d",n);
        front++;
    }
}
int display()
{
    int i;
    if(front>rear)
    printf("the queue is empty\n");
    else{
        printf("the numbers you entered in the queue are:\n");
        for(i=front;i<=rear;i++)
        printf("%d,",a[i]);
    }
    printf("\n");
}
int main()
{
    int c;
   do
   {
     printf("******QUEUE******\n");
     printf("ENTER YOUR CHOICE\n");
     printf("press 1 to enter the number in queue\n");
     printf("press 2 to delete an element from queue\n");
     printf("press 3 to display the numbers you entered\n");
     printf("press 4 to exit from the code\n");
     scanf("%d",&c);
     switch(c)
     {
        case 1:
        enqueu();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("you are exiting from the code\n");
        break;
        default:
        printf("wrong choice entered!\n");
     }
   } while (c!=4);
   return 0;
}
