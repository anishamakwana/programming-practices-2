#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};
    int main()
{
     struct student s[5];
     int i;
     for(i=0;i<5;i++)

    {
        struct student s;
        printf("enter roll no:");
        scanf("%d",&s[i].rollno);

        printf("enter name:");
        scanf("%s",s[i].name);

        printf("enter department:");
        scanf("%s",s[i].department);

        printf("enter year of join:");
        scanf("%d",&s[i].year);

        printf("enter score:");
        scanf("%f",&s[i].score);
    }
    printf("\n student detail \n");

    for(i=0;i<5;i++)
     {

    printf("\n student details:\n",i+1);
    printf("roll no:%d\n",s[i].rollno);
    printf("name:%s\n",s[i].name);
    printf("department:%s\n",s[i].department);
    printf("year:%d\n",s[i].year);
    printf("score:%f\n",s[i].score);
    }
    return 0;
}

