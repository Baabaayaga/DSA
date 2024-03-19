#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\91906\OneDrive\Desktop\c\randg.h"

struct node{
int data;
struct node*next;
};

int main()
{
    FILE*fptr;
    int num;
    struct node *tail=NULL;
    randonGenrator(4);

    fptr=fopen("text.txt","r");

    if(fptr==NULL)
    {
        printf("File not found\n");
        return 0;
    }
    while(fscanf(fptr,"%d",&num)!=-1)
    {
        //printf("%d ",num);
        AddatBeg(&tail,num);
    }

    DisplayListFILE(tail);
}
void AddatBeg(struct node **head,int e)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        perror("");
        return;
    }
    p->data=e;
    p->next=*head;
    *head=p;

}

void DisplayListFILE(struct node *head)

{
    struct node *cur=head;
    FILE *fptr=fopen("text.txt","a");
    fputs("\nthe lift moves: ",fptr);

    while(cur)
    {
        printf("%d ",cur->data);
        fprintf(fptr,"%d\t",cur->data);
        cur=cur->next;
    }
}
