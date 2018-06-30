#include <stdio.h>
int main()
{ 
  int num, n, a, b, c, d, e;
  printf("请输入一个不多于五位的正整数：");
  scanf("%d",&num);
  if (num>9999) n=5;
  else if (num>999) n=4;
  else if (num>99) n=3;
  else if (num>9) n=2;
  else n=1;
  printf("这是一个%d位数。\n",n);
  e=num%10000;
  d=(num-e*10000)%1000;
  c=(num-e*10000-d*1000)%100;
  b=(num-e*10000-d*1000-c*100)%10;
  a=num-e*10000-d*1000-c*100-b*10;
  printf("这个数的每位上的数字是%d,%d,%d,%d,%d。\n",e,d,c,b,a);
  return 0;
 } 
