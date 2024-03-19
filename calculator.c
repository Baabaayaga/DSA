#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[2];
    int k=0,num1,num2;

    FILE *fp = fopen("Calculator.txt","w");
    fprintf(fp,"%d ",rand());
    fprintf(fp,"%d ",rand());
    fclose(fp);

    fp = fopen("Calculator.txt", "r");
    fscanf(fp,"%d",&num1);
    fscanf(fp,"%d",&num2);
    fclose(fp);

    fp = fopen("Calculator.txt","a");

    fputs("\nAddition of two no: ",fp);
    fprintf(fp,"%d", num1+num2);

    fputs("\nSubstraction of two no: ",fp);
    fprintf(fp,"%d", num1-num2);

    fputs("\nMultiplication of two no: ",fp);
    fprintf(fp,"%d", num1*num2);

    fputs("\nDivision of two no: ",fp);
    fprintf(fp,"%0.2lf", (double)num1/num2);

    fclose(fp);
}
