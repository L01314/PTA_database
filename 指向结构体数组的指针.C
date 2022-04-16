#include <stdio.h> 
struct stu{
    int num;
    char *name;
    char type;
    float score;
}boy[5]={

          {101,"iPhone",'G',5500},
          {102,"Note",'G',4800},
          {103,"华为",'G',3500},
          {104,"小米",'G',1999},
          {105,"谷歌",'G',3800},
        };

int main()
{
	struct stu *ps;
	printf("No\tName\t\t型号\tScore\t\n");
	for (ps = boy; ps<boy + 5; ps++)
		printf("%d\t%s\t\t%c\t%f\t\n", ps->num, ps->name, ps->type, ps->score);
}

