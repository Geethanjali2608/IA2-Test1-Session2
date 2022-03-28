#include<stdio.h>
int input_side()
{
  int a;
  printf("enter value of side:\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  int isscalene;
  if(a==b && a==c)
  {
   isscalene=1;
  }
  else
  {
   isscalene=2;
  }
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene=1)
  {
    printf("given triangle is not scalene\n");
  }
  else
  {
    printf("given triangle is scalene\n");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}



/*#include<stdio.h>
int input_side()
{
  int a,b,c;
  printf("enter side value:\n");
  scanf("%d",&a);
  return 0;
}
int check_scalene(int a,int b,int c)
{
  int isscalene;
  if(a==b && a==c)
  {
    isscalene=1;
  }  
  else
  {
    isscalene=2;
  }
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("given triangle is not scalene");
  }  
  else
  {
    printf("given triangle is scalene");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}*/