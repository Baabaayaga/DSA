#include<stdio.h>
#include<string.h>
#include"sort.h"
struct student
{
	char name[20];
	int rno;
};

void displayArray(int *, int);
void displayStudent(struct student *, int);
int cmpRno(void *, void *);
int cmpInt(void *, void *);


int main()
{
	int a[5]= {15, 12, 10, 8, 14};
	selectionSort(a, 5, sizeof(int), cmpInt);
	displayArray(a, 5);

struct student s[3]={ {"ABC", 10}, {"XYZ",7}, {"MNO", 8}};

	selectionSort(s, 3, sizeof(struct student), cmpRno);

	displayStudent(s, 3);

//    double d[]={2.3,4.1,9.6};
  //  selectionSort(d,3,sizeof(double), cmpDouble);
//display double array d
}

int cmpRno(void *a, void *b)
{
	struct student *p = (struct student *)a;
	struct student *q = (struct student *)b;
	if(p->rno > q->rno)
		return 1;
	else
		return 0;
}


int cmpInt(void *a, void *b)
{
	int *p =(int *)a;
	int *q = (int *)b;
	if(*p>*q)
		return 1;
	else
		return 0;
}

void displayArray(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

void displayStudent(struct student *s, int n)
{

	int i;
	for(i=0;i<n;i++)
	{
		printf("rno:%d\n",s[i].rno);
		printf("name:%s\n",s[i].name);
	}
}



