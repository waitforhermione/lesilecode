
/******************************************************************************************************************************************************
验证哥德巴赫猜想
#include<stdio.h>
int prime(int n);
int fun(int n);
int main()
{
   int n;
   scanf("%d",&n);
   if(fun(n))
   {
      printf("right!");
   }
   else
   {
      printf("wrong!");
   }
}
int fun(int n)
{
   int j=n,k=0;
   int i,finalflag=1,flag=0;
   for(j=n;j>0;j--,k++)
   {
      if(prime(j)&&prime(k))
      {
         return finalflag;
      }
   }
   return 0;
}
int prime(int n)
{
    int i,flag=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
        }
    }
    if(flag==1)
    {
        return flag=1;
    }
    else
    {
        flag=0;
        return flag;
    }
}*/




/*************************************************************************************************************************************************
猜数最简单版
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int x,n,flag=1;
   srand((unsigned int)time(NULL));
   x= rand()%100+1;
   while(flag)
   {
      scanf("%d",&n);
      if(n==x)
      {
         flag=0;
      }
      else 
      {
         printf("guess again!\n");
      }  
   }
   printf("right!");
   
}*/




/*************************************************************************************************************************************************
输出a+aa+aaa+....
#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}
int fn( int a, int n )
{
   int s=0,i,m;
   for(i=0;i<n;i++)
   {
      int j=i,a1=a;
      while(j!=0)
      {
         a1=a1*10;
         j--;
      }
      s+=a1;
      
   }
   return s;
}
int SumA( int a, int n )
{
   int i;
   int sum=0;
   for(i=0;i<n+1;i++)
   {
      sum+=fn(a,i);
   }
   return sum;
}*/



/*************************************************************************************************************************************************
 * 判断各位之和是否为五 利用整形特点取出最后一个数
#include <stdio.h>
int is( int number );
void count_sum( int a, int b );
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}
int is( int n)
{
int s=0,t=0;
while(n!=0){
t=n%10;//取出最后一位
n/=10;//利用整形特点去掉后面的数
s+=t;
}
if(s==5)
return 1;
else
return 0;
}
void count_sum( int a, int b )
{
int sum=0,count=0,i;
for(i=a;i<=b;i++){
if(is(i)){
count++;
sum+=i;
}
}
printf("count = %d, sum = %d",count,sum);
}*/



/*************************************************************************************************************************************************
 * 判断素数
#include<stdio.h>
#include<math.h>
int sushu(int n);
int main()
{
   int n,i,m,t;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   scanf("%d",&m);
   t=sushu(m);
   if(t==0)
   printf("No\n");
   else
   printf("Yes\n");
   }
   return 0;
}
int sushu(int n)
{
   int i,flag=1;
   int s=sqrt(n);
   if(n==1)
   return 0;
   for(i=2;i<s;i++)
   if(n%i==0)
   {
      return flag=0;
   }
   return flag;

}*/

/*************************************************************************************************************************************************
 * 求幂之和
#include<stdio.h>
#include<math.h>
int main()
{
   int sum=0,n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      sum=sum+pow(2,i);
   }
   printf("result = %d",sum);
}*/



/*************************************************************************************************************************************************
 * 设置精度，输入精度，输出P。看看别人写的代码多简洁。。。
#include<stdio.h>
double fun(int n);
double fun1(int n);
int main()
{
   double sum,s,i=1,result;
   double eps;
   scanf("%le",&eps);
   while(s>=eps)
   {
      s=fun(i)/fun1(i);
      sum+=s;
      i++;
   }
   result=2*(1+sum);
   printf("PI = %.5lf",result);
}
double fun(int n)
{
   double j=n,s=1;
   for(int i=1;i<n;i++)
   {
      s=s*j;
      j--;
   }
   return s;
}
double fun1(int n)
{
   double j=1,s=1;
   while(j<=n)
   {
      s*=(2*j+1);
      j++;
   }
   return s;
}
***********************************************************************************************
*#include <stdio.h> 
int main () 
{    
   double eps,sum=2,i,temp=1;    
   scanf("%lf",&eps);    
   for ( i=1; temp>eps; i++)
   {        
      temp *=  i /(2*i+1);        
      sum += temp*2 ;    
   }    
   printf("PI = %.5f",sum);    
   return 0 ; 
}*/



/***********************************************************************************************
 * 数列求和，这回聪明点借鉴楼上写法了
#include<stdio.h>
double fun(double n);
int main()
{
   double n,sum=0;
   scanf("%lf",&n);
   for(double i=1;i<=n;i++)
   {
      sum+=fun(i);
   }
   printf("sum = %.6lf",sum);
}
double fun(double n)
{
   double sum=1;
   for(double i=n;i<=(2*n-1);i++)
   {
      sum*=1/i;
   }
   return sum;

}***********************************************************************************************/



/***********************************************************************************************
计算素因子式 搞不懂的算法
#include<stdio.h>
#include<math.h>
  
int main()
{
 int i,j;
 long int m, n;
 int count;
 int isPrime,flag;
  
 isPrime = 1;
 flag = 0;
 scanf("%ld",&n);
 printf("%ld=",n);
 m = sqrt(n);
 for(i = 2; i <= m;i++){
 if(n%i == 0){
  //printf("%d",i);
  isPrime = 0;
  count = 1;
  n = n / i;
  while(n%i == 0){
  n = n / i;
  count++;
  }
  if(flag)
  printf("*");
  else
  flag = 1;
  if(count == 1)
  printf("%d",i);
  else
  printf("%d^%d",i,count);
 }
 }
 if(isPrime)
 printf("%d",n);
  
 return 0;
}
***********************************************************************************************/
/*#include<stdio.h>
  
int main()
{
   int i;
   int year[6];
   int month[6];
   int day[6];
   printf("please input the date as follows:\n");
   for(i=0;i<5;i++)
   {
      scanf("%d.%d.%d",&year[i],&month[i],&day[i]);
   }
   int j,k;
   for(i=0;i<5;i++)
   {
      for(j=i;j<5-i;j++)
      {
         if(year[j]<year[j+1])
         {
            k=year[i];
            year[i]=year[i+1];
            year[i+1]=k;
            k=month[i];
            month[i]=month[i+1];
            month[i+1]=k;
            k=day[i];
            day[i]=day[i+1];
            day[i+1]=k;
         }
      }
   }
     for(i=0;i<5;i++)
   {
      printf("%d.%d.%d\n",year[i],month[i],day[i]);
   }

}*/

/**************************************************************************************************
 * 动态内存/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   while(1)
   {
      malloc (1024);
   }
}*/


/**********************************************************************
 * 结构体数组
#include<stdio.h>
#define n 3
#define m 4//宏定义

struct student 
{
   char name[20];
   char num[9];
   float score[4];
   float avg;
}stu[3],temp[3];
void input (struct student *p,int n,int m);
void ouput (struct student *p, int n,int m);//函数声明
int main()
{
   struct student *p;
   p=stu;
   void input (struct student *p,int n,int m);
   void ouput (struct student *p, int n,int m);
   return 0;
}
//以下为函数定义
void input (struct student *p,int n,int m)
{
   int i;
   for(i=0;i<4;i++)
   {
      scanf("%c %c %d %d %d %d " ,&stu[i].name,&stu[i].num,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
   }
}//输入数据
void ouput (struct student *p, int n,int m)
{
   int i,j,k,s=0;
   struct student temp;
   for(i=0;i<3;i++)
   {
      stu[i].avg=0;
      for(j=0;j<4;j++)
      {
         stu[i].avg+=stu[i].score[j]/4;
      }
   }
      for(i=0;i<4;i++)
      {
         for(j=i;j<4-i;j++)
         {
          if(stu[j].avg<stu[j+1].avg)
            {
            temp[s]=stu[j];
            stu[j+1]=stu[j];
            stu[j]=temp[s];
            s++;
            }
         }
      }
   
   for(i=0;i<3;i++)
   {
      printf("%c %c %d\n",stu[i].name,stu[i].num,stu[i].avg);
   }
}
*/

#include<stdio.h>
#define n 3
#define m 4

struct stu
{
    char name[20];
    char num[9];
    float score[4];
    float avg;
};
//输出数据 
void ouput (struct stu stu[3], int a,int b)
{
	struct stu temp[a];
    int i,j,k,s=0;
    for(i=0;i<a;i++)
    {
       stu[i].avg=0;
       for(j=0;j<b;j++)
       {
          stu[i].avg+=stu[i].score[j]/b;
       }
    }
       for(i=0;i<4;i++)
       {
            for(j=i;j<4-i;j++)
            {
            	if(stu[j].avg<stu[j+1].avg)
           		{
           			temp[0]=stu[j];
            		stu[j+1]=stu[j];
            		stu[j]=temp[0];
            		s++;
            	}
         	}
      }
   
    for(i=0;i<a;i++)
    {
       printf("%c %c %0.0lf\n",stu[i].name,stu[i].num,stu[i].avg);
    }
}


//以下为函数定义
void input (struct stu stu[3],int a,int b)
{
    int i;
    for(i=0;i<a;i++)
    {
		scanf("%c %c %lf %lf %lf %lf " ,&stu[i].name,&stu[i].num,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
    }
}

int main()
{
    struct stu stu[n];
    input (stu,n,m);
    ouput (stu,n,m);
    return 0;
}

