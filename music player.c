#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct songname
{
char songname[20];
char singername[20];
double duration;
};
struct node
{   struct node*prev;
  struct node*next;
    struct songname s;
};
int main()
{ struct node * head=NULL;
struct songname t;
char song[20],singer[20];
  int ch;
  while(1)
{
    printf("1.Add at song by name\n");
    printf("2.delete at song by name\n");
    printf("3.delete all songs by singername\n");
    printf("4.display song if duration is less than that of prev song and duration fo next song\n");
    printf("5.Reverse the playlist\n");
    printf("6.Display the songs one by one based on user choice\n");
    printf("7.Delete song if duration is greater than the duration of prev song\n");
    printf("8.Exit\n");
    printf("9,display\n");
    printf("Enter choice:");
     scanf("%d",&ch);
    switch (ch)
    {
    case 1: readsongdetails(&t);
           addsongbyname(&head,t);
        break;
     case 2: if(head==NULL)
         printf("List empty\n");
  else{
     printf("Enter song name to be deleted:");
     scanf("%s",song);
     deletesongbyname(&head,song);
    }
    break;
    case 3: if(head==NULL)
         printf("List empty\n");
  else{
     printf("Enter singername whose song is to be deleted:");
     scanf("%s",singer);
     deletesongbysinger(&head,singer);
    }
    break;

    case 8:exit(0);
    case 9:display(head);
           break;
    default:
        break;
    }
}

}
void readsongdetails(struct songname *q)
{
    printf("Enter songname:");
    scanf("%s",q->songname);
    printf("Enter singernamee:");
    scanf("%s",q->singername);
    printf("Enter duration:");
    scanf("%lf",&q->duration);


}
void deletesongbyname(struct node **head,char song[])
{
    struct node *cur=*head;
    int c;
    do
    {
        c=strcasecmp(cur->s.songname,song);
       if(c==0)
         {
           if(cur==*head)
           {
              if((*head)->next==*head)
              {
                free(cur);
                *head=NULL;
                return ;
              }
              else{
                cur->next->prev=cur->prev;
                cur->prev->next=cur->next;
                *head=(*head)->next;
                free(cur);
                return ;
              }

           }
           else
           {
           cur->prev->next=cur->next;
           cur->next->prev=cur->prev;
           free(cur);
           return;
           }
         }

         cur=cur->next;
    } while (cur!=*head);
    printf("Key not found\n");

}
void addsongbyname(struct node ** head,struct songname q)
{
    struct node *p=(struct node *)malloc(sizeof(struct node ));
    if(p==NULL)
    {
        perror("");
        return;

    }
    p->s=q;
    p->next=p;
    p->prev=p;
    if(*head==NULL)
       *head=p;
    else{
     p->next=*head;
     p->prev=(*head)->prev;
     (*head)->prev=p;
     p->prev->next=p;
     *head=p;


    }
}
void display(struct node *head)
{   if(head==NULL)
      {
        printf("List empty\n");
        return;
      }
     struct node *cur=head;
 do
  {
    displaysong(&cur->s);
    cur=cur->next;
  } while (cur!=head);

}
void displaysong(struct songname *s)
{
    printf("SongName:%s\n",s->songname);
    printf("SingerName:%s\n",s->singername);
    printf("Duration:%lf\n",s->duration);
}
void deletesongbysinger(struct node **head,char singer[])
{
    struct node *cur=*head,*p=NULL;
    int c;
    do
    {
        c=strcasecmp(cur->s.singername,singer);
       if(c==0)
         {
           if(cur==*head)
           {
              if((*head)->next==*head)
              {
                free(cur);
                *head=NULL;
                return ;
              }
              else{
                cur->next->prev=cur->prev;
                cur->prev->next=cur->next;
                *head=(*head)->next;
                free(cur);
                return ;
              }

           }
           else
           {
           cur->prev->next=cur->next;
           cur->next->prev=cur->prev;
           free(cur);
           return;
           }
         }
         cur=cur->next;
    } while (cur!=*head);
    printf("Key not found\n");

}
