#include "stdlib.h"
#include "stdio.h"
struct stud_type
{ long num;
char name[20];
char sex;
int age;
float score;
};
int main()
{ void list(struct stud_type student);
struct stud_type new(void);
struct stud_type student[3];
int i;
for(i=0;i<3;i++)
student[i]=new();
printf("num\t name sex age score\n");
for(i=0;i<3;i++)
list(student[i]);
}
struct stud_type new(void)
{
struct stud_type student;
char ch;
char numstr[20];
printf("\nenter all data of student:\n");
gets(numstr); student.num=atol(numstr);
gets(student.name);
student.sex=getchar();
ch=getchar();
gets(numstr); student.age=atoi(numstr);
gets(numstr); student.score=atof(numstr);
return(student);
}
void list(struct stud_type student)
{
printf("%ld %-15s %3c %6d %6.2f\n",student.num,student.name,
student.sex,student.age,student.score);
}



