#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=-1, b=1, c, n, i;
    FILE *fp = fopen("Fibonnacci.txt","w");

    fprintf(fp,"%d ",rand() %100);
    fclose(fp);

    fp = fopen("Fibonnacci.txt","r");
    fscanf(fp,"%d",&n);
    fclose(fp);

    fp = fopen("Fibonnacci.txt", "a");
    fputs("\nFibonnacci series is : ", fp);

    for(i=1; i<=n; i++)
    {
        c=a+b;
        fprintf(fp,"%d ",c);
        a=b;
        b=c;
    }
}
