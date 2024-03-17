#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void addatbeg(struct node **, int);
void displaydata(struct node **);
int deleteatbeg(struct node **);
int searchkey(struct node **, int);
int Checkdata(struct node **, int);

int main()
{
    struct node *head=NULL;
    int n, e, f, pos, key;

    while(1)
    {
        printf("\n1.Add at beginning\n");
        printf("2.Delete at beginning\n");
        printf("3.display list\n");
        printf("4.Search a element\n");
        printf("5.Check data at Position\n");

        printf("Enter n: ");
        scanf("%d",&n);

        switch(n)
        {
            case 1: printf("Enter the data: ");
                    scanf("%d",&e);
                    addatbeg(&head, e);
                    break;

            case 2: if(head==NULL)
                        printf("List empty");
                    else
                    {
                        e=deleteatbeg(&head);
                    }
                    break;

            case 3: displaydata(&head);
                    break;

            case 4:if(head==NULL)
                        printf("List Empty");
                    else
                    {
                        printf("Enter the Key to search: ");
                        scanf("%d",&key);
                        f=searchkey(&head, key);
                        if(f==1)
                            printf("Data Found: ");
                        else
                            printf("Data Not Found: ");
                    }
                    break;

            case 5:if(head==NULL)
                        printf("List Empty");
                    else
                    {
                        printf("Enter Postion: ");
                        scanf("%d",&key);

                        f=Checkdata(&head, key);
                        printf("The Data at the position %d is %d ",key, f);
                    }
                    break;

            default: exit(0);
        }
    }
}

void addatbeg(struct node **head, int e)
{
    struct node *p;

    p=(struct node*)malloc(sizeof(struct node));

    if(p==NULL)
    {
        perror(" ");
        return;
    }

    p->data=e;
    p->next=*head;
    *head=p;
}

void displaydata(struct node **head)
{
    struct node *cur=*head;

    if(*head==NULL)
    {
        printf("----------List Empty----------\n----------Enter data----------\n");
        return;
    }
    while(cur)
    {
        printf("%d\t",cur->data);
        cur=cur->next;
    }
}

int deleteatbeg(struct node **head)
{
    struct node *p=*head;

    *head=(*head)->next;
    int e=p->data;
    free(p);
    return e;
}

int searchkey(struct node ** head, int key)
{
    struct node *cur=*head;

    while(cur)
    {
        if(key==cur->data)
        {
            return 1;
        }
        cur=cur->next;
    }
    return 0;
}

int Checkdata(struct node **head , int key)
{
    struct node *cur=*head;

    for(int i=1;i<key;i++)
        cur=cur->next;

    return cur->data;
}
