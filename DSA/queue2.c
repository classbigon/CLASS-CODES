# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

#define MAXSIZE 5
void initialize();
void Iqinsert();
void Iqdelete();
void Iqtraverse();
int queue[MAXSIZE];
int front,rear;

//function to  initialize the queue
void initialize()
{
    front=rear=-1;
}

//function to display the queue
void Iqtraverse()
{
    if (front == -1)
    {
    printf("\nQueue is empty (Queue underflow)");
       return;
    }
    else
    {
        printf("\nQueue elements are : \n");
        for(int i = front ; i <=rear ; i ++)
        printf("%d\t",queue[i]);
    }
}

//function to insert an element into queue
void Iqinsert()
{
    int num;
    if(rear == MAXSIZE-1)
    {
        printf("\n Queue is full(Queue overflow)");
        return;
    }
    printf("\n Enter the element to be inserted : ");
    scanf("%d",&num);
    rear ++;
    queue[rear = num];
    if(front == -1)
    front=0;
}

//function to delete an element from a queue

void Iqdelete()
{
    if(front == -1)
    {
        printf("\n Queue is empty(Queue underflow)");
        return;
    }
    int num;
    num = queue[front];
    printf("\n Deleted element is : %d",num);
    front ++;
    if(front > rear)
    front = rear =-1;
}



void main()
{
    int clrscr();
    initialize();
    int choice;
    while(1)
    {
        int clrscr();
        printf("\n STATIC IMPLEMETATION OF LINEAR QUEUE");
        printf("\n----------------------------");
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Traverse");
        printf("\n4.Exit");
        printf("n------------");
        printf("\n\nEnter your choice [1/2/3/4]:");
        scanf("%d,&choice");
        switch(choice)
        {
            case 1: Iqinsert();
            break;
            case 2:Iqdelete();
            break;
            case 3:Iqtraverse();
            break;
            case 4:exit(0);
            default :printf("\n Invalid Choice");
        }
        getch();

    }
}