
#include <stdio.h> 
#define MAX_TITLE_SIZE 30
#define MAX_AUTHOR_SIZE 40
#define MAX_SIZE 2
//构造一个BOOK结构体，用于存放title,author,price  
struct book
{
   char title[MAX_TITLE_SIZE];
   char author[MAX_AUTHOR_SIZE];
   float price;    
};
int main()
{
    //设置一个计数器，用来计数输入的次数 
    int count=0;
    //设置另外一个计数器，用来遍历显示输入的book 
    int index=0;
    struct book lib[MAX_SIZE];
    printf("手机信息录入系统\n");
    //对相关的参量进行数据输入 
    while(count<MAX_SIZE&&
          printf("手机型号是:")&&gets(lib[count].title)!=NULL && lib[count].title[0]!='\n')
            {
               printf("制造厂商: \t");
               gets(lib[count].author);
               printf("价格: \t");
                scanf("%f",&lib[count].price);
                    count++;
                    //如果不为\n，就继续下一次的数据输入 
                while(getchar()!='\n')
                {
                    continue;
                }
            
                if(count<MAX_SIZE)
                {
                    printf("输入下一款手机信息\n");
                    
                }
            }
       if(count>0)
        {
            printf("下面是手机列表\n");
            //遍历结构体数组 
           for(index=0;index<count;index++)
               {
                printf("手机型号是%s制造厂商是%s价格是%f \n"
                            ,lib[index].title,lib[index].author,lib[index].price);           
               }    
        }
    return 0;
}

