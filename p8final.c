#include<stdio.h>
struct _triangle 
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter no. of inputs:\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter base:\n");
  scanf("%f",&t.base);
  printf("enter altitude:\n");
  scanf("%f",&t.altitude);
  return t;
}
void input_n_triangle(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
  for(int j=0;j<n;j++)
    {
      find_area(&t[j]); 
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=1;i<n;i++)
    {
      if(small.area>t[i].area)
      {
        small=t[i];
      }
    }
 return small;
}
void output(int n,Triangle t[n],Triangle small)
{
  printf("the smallest of triangles with base and height\n");
  for(int i=0;i<n-1;i++)
    {
      printf("%f,%f\n",t[i].base,t[i].altitude);
    }
  printf("and %f,%f is\n",t[n-1].base,t[n-1].altitude);
  printf("triangle with base %f,%f whose area is ",small.base,small.altitude);
  printf("%f",small.area);
}
int main()
{
  int n;
  n=input_n();
  Triangle t[n];
  input_n_triangle(n,t);
  find_areas_n(n,t);
  Triangle small;
  small=find_smallest_triangle(n,t);
  output(n,t,small);
  return 0;
}