#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int array[100];
    int sum, highest, i, n, num, smallest=INT_MAX;
    sum=highest=n=0;

    FILE *fp = fopen("ArrayOperations.txt","w");
    for(i=0;i<20;i++)
        fprintf(fp,"%d ",rand());
    fclose(fp);

    fp = fopen("ArrayOperations.txt", "r");

    if (fp==NULL)
    {
        perror("Unable to open file.\n");
        exit(1);
    }

    while(fscanf(fp,"%d",&num)!=EOF)
    {
        array[n]=num;
        n++;
    }

    fclose(fp);

    for(int i=0; i<n; i++)
    {
        if(array[i]>highest)
            highest=array[i];
    }

    for(int i=0;i<n;i++)
    {
        if(array[i]<smallest)
        smallest=array[i];
    }

    for(int i=0;i<n;i++)
        sum+=array[i];

    fp=fopen("ArrayOperations.txt","a");

    fputs("\nHighest Element is: ",fp);
    fprintf(fp,"%d ",highest);

    fputs("\nSmallest Element is: ",fp);
    fprintf(fp,"%d ",smallest);

    fputs("\nSum of the Elements is: ",fp);
    fprintf(fp,"%d ",sum);

    fputs("\nAverage of the Array is: ",fp);
    fprintf(fp,"%d ",sum/n);
}
