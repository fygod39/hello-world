#include<stdio.h>
int main()  
{
 int m, n, a, b, t, c; 
   printf("请输入两个正整数:\n"); 
   scanf("%d%d", &a, &b); 
   m=a;   n=b; 
 while(b!=0)   
  {c=a%b; a=b;  b=c;}
  printf("最大公因数为:%d\n", a);
  printf("最小公倍数为:%d\n", m*n/a);
 if(a=1)
 {printf("这两个数互质");}
 return 0;
}
