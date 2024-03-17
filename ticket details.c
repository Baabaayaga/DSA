#include<stdio.h>
#include<stdlib.h>
struct ticket
{
    char Name[20];
    int Pnr;
    char Gender
    char Boardingstation[30];
    char Alightstation[30];
    int Age;
    int Train number;
    int Number of passengers;
};

struct date
{
    int Day;
    int Month;
    int Year;
};

void readTicketDetails(struct ticket*,int);
void displayTicketDetails(struct ticket*,int);


int main()
{
    int n;
    scanf("%d",&n);

    struct ticket*t
    t=(struct ticket*)malloc(n*size of((struct ticket));

     struct date*d
    t=(struct date*)malloc(n*size of((struct date));

    readTicketDetails(t,n);
    displayTicketDetails(t,n);
}


void readTicketDetils(struct ticket*t,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter Name");
        scanf("%s",t[i].Name);

          printf("Enter PNR");
        scanf("%d",&t[i].Pnr);

          printf("Enter Gender");
        scanf("%s",t[i].Gender);

          printf("Enter Boarding station");
        scanf("%s",t[i].Boarding station);

          printf("Enter Alight station");
        scanf("%s",t[i].Alight station);

          printf("Enter Age");
        scanf("%d",&t[i].Age);

          printf("Enter Train number");
        scanf("%d",&t[i].Train number);

          printf("Enter Number of passengers");
        scanf("%d",%t[i].Number of passengers);

        int j;
        for(j=0;j<n;j++);
        {
            printf("Enter date of journey");
            scanf("%d",&d[j].Day);
            scanf("%d",&d[j].Month);
            scanf("%d",&d[j].Year);
        }
    }
}


void displayTicketDetails(struct ticket*t,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("Name=%s\n",t[i].Name);
       printf("PNR=%d\n",t[i].Pnr);
       printf("Gender=%s\n",t[i].Gender);
       printf("Boarding station=%s\n",t[i].Boarding station);
       printf("Alight station=%s\n",t[i].Alight station);
       printf("Age=%d\n",t[i].Age);
       printf("Train number=%d\n",t[i].Train number);
       printf("Number of passengers=%s\n",t[i].Number of passengers);


       int j;
       for(j=0;j<n;j++)
       {
           printf("Day=%d\n",d[j].Day);
           printf("Day=%d\n",d[j].Month);
           printf("Day=%d\n",d[j].Year);
       }
    }
}
