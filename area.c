#include<stdio.h>
#include<stdlib.h>

int main()
{
    float area,b,h;

    FILE *fp = fopen("TriangleArea.txt","w");
    fprintf(fp,"%d ",rand());
    fprintf(fp,"%d ",rand());
    fclose(fp);

    fp = fopen("TriangleArea.txt", "r");
    fscanf(fp,"%f%f",&b,&h);
    fclose(fp);

    area=0.5*h*b;

    fp = fopen("TriangleArea.txt", "a");

    if(fp==NULL)
    {
        perror("Unable to open file.\n");
        exit(1);
    }

    fputs("\nArea of the triangle is: ",fp);
    fprintf(fp,"%.2f",area);
    fclose(fp);
}
