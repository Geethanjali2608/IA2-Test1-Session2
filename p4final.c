#include <stdio.h>

int input_array_size()
{
  int k;
  printf("Enter the length of the array:\n");
  scanf("%d",&k);
  return k;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int is_composite(int n)
{
  for (int i=2;i<=n/2;i++)
  {
    if (n%i==0)
      return 1;
  }
  return 0;
}
int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    if (is_composite(a[i]))
    {
      sum+=a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("%d\n",sum);
}
int main()
{
  int a=input_array_size();
  int data[a];
  input_array(a, data);
  int result=sum_composite_numbers(a, data);
  output(result);
  return 0;
}




/*#include<stdio.h>
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
}*/
