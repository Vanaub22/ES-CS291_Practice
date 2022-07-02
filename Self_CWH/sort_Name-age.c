#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char cname[10];
    int rollno;
    char sub1[10];int m1;
    char sub2[10];int m2;
    char sub3[10];int m3;
    float avg;
}s;

void main()
{
    s *p;
    int n;

    printf("Enter the number of students: ");
    scanf("%d",&n);

    p=malloc(n*sizeof(s));
    printf("\n");

    for(int i=0;i<n;i++)
    {
        printf("Enter the details of student %d:\n",i+1);
        printf("Enter the course name: ");
        scanf("%s",p[i].cname);

        printf("Enter the roll number: ");
        fflush(stdin);
        scanf("%d",&p[i].rollno);

        printf("Enter the code of subject 1: ");
        fflush(stdin);
        scanf("%s",p[i].sub1);

        printf("Enter the marks of subject 1: ");
        fflush(stdin);
        scanf("%d",&p[i].m1);

        printf("Enter the code of subject 2: ");
        fflush(stdin);
        scanf("%s",p[i].sub2);

        printf("Enter the marks of subject 2: ");
        fflush(stdin);
        scanf("%d",&p[i].m2);

        printf("Enter the code of subject 3: ");
        fflush(stdin);
        scanf("%s",p[i].sub3);

        printf("Enter the marks of subject 3: ");
        fflush(stdin);
        scanf("%d",&p[i].m3);
        
        p[i].avg=(float)(p[i].m1+p[i].m2+p[i].m3)/3;
        printf("\n");
    }
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Course Name\tRoll No\t\tSub1\t\tSub2\t\tSub3\t\tavg\n");
    printf("------------------------------------------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%s\t\t%d\t\t%s\t\t%d\t\t%s\t\t%d\t\t%.2f\n",p[i].cname,p[i].rollno,p[i].sub1,p[i].m1,p[i].sub2,p[i].m2,p[i].sub3,p[i].m3,p[i].avg);
        printf("\n");
    }
    printf("------------------------------------------------------------------------------------------------------------\n");
            
}