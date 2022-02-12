#include<stdio.h>
int input()
{
  int a;
  printf("enter any number:\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int hcf;
  for(int i=2;i<a && i<b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf=i;
    }
  }
  return hcf;
}
void output(int a,int b,int hcf)
{
  printf("hcf of %d and %d is %d",a,b,hcf);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
}