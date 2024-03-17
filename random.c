#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fptr;
    int num;
    fptr=fopen("text.txt","w");

    if(fptr==NULL)
    {
        printf("unable to open file.");
        exit(0);

    }
    for(int i=0;i<10;i++)
    {
        fprintf(fptr,"%d ",rand()%50+1);
    }


}


