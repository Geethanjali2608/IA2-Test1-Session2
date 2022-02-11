#include<stdio.h>
int input_number()
{
 int n;
 printf("enter number:\n");
 scanf("%d",&n);
 return n;
}
int is_composite(int n)
{
  int composite;
  for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
      composite=1;
    }
    else
    {
     composite=2;
    }
  }
  return composite;
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is a prime number\n",n);
  }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}

