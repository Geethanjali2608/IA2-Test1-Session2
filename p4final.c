#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the no. of times inputs to be taken:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter any value:\n");
    scanf("%d",&a[n]);
  }
}
int sum_composite_number(int n,int a[n])
{ 
  int sum=0;
  for(int i=0;i<n;i++)
  {
    for(int x=2;x=a[n]/2;x++)
    {
      if(a[n]%i==0)
      {
        sum=sum+a[n];
      }  
    }
  }
  return sum;
}
void output(int sum)
{
  printf("%d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_number(n,a);
  output(sum);
  return 0;
}
