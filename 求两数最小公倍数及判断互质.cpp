#include<stdio.h>
int main()  
{
 int m, n, a, b, t, c; 
   printf("����������������:\n"); 
   scanf("%d%d", &a, &b); 
   m=a;   n=b; 
 while(b!=0)   
  {c=a%b; a=b;  b=c;}
  printf("�������Ϊ:%d\n", a);
  printf("��С������Ϊ:%d\n", m*n/a);
 if(a=1)
 {printf("������������");}
 return 0;
}
