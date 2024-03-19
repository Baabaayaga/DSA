#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("Sum.txt","w");
    fprintf(fp,"%d ",rand() %100);
    fclose(fp);

    int sum=0, n, rem;
    fp = fopen("Sum.txt", "r");
    fscanf(fp,"%d",&n);
    fclose(fp);

    while (n)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }

    fp = fopen("Sum.txt", "a");
    if (fp==NULL)
    {
        perror("Unable to open file.\n");
        exit(1);
    }
    fputs("\nThe Sum Of Digits is: ",fp);
    fprintf(fp,"%d",sum);
    fclose(fp);
}
