#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("Factorial.txt","w");
    int num = (rand()%12)+1;
    long long int mul = 1;

    fprintf(fp,"%d",num);
    fclose(fp);
    fp=fopen("Factorial.txt","r");

    while(fscanf(fp,"%d",&num)!=EOF);
    fclose(fp);

    for(int i=num; i>0; i--)
        mul=mul*i;

    fp=fopen("Factorial.txt","a");
    fputs("\nThe factorial of the number is: ",fp);
    fprintf(fp,"%lld\n",mul);
    fclose(fp);
}
