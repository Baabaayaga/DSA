#include<stdio.h>
#include<stdlib.h>

int reverse(int);

int main()
{
    int num,rev;

    FILE *fp = fopen("Reverse.txt","w");
    fprintf(fp,"%d",rand());
    fclose(fp);

    fp = fopen("Reverse.txt","r");
    fscanf(fp,"%d",&num);
    fclose(fp);

    rev=reverse(num);

    fp=fopen("Reverse.txt","a");
    fputs("\nThe Reverse of the Number is: ",fp);
    fprintf(fp,"%d",rev);
}

int reverse(int n)
{
    int r, sum=0, temp=n;

    while(n)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;
}
