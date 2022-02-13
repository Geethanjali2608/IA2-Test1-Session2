#include<stdio.h>
struct triangle
{
  float base,altitude,area;
};
struct triangle input_triangle()
{
  struct triangle t;
  printf("enter base value:\n");
  scanf("%f",&t.base);
  printf("enter height:\n");
  scanf("%f",&t.altitude);
  return t;
}
void find_area(struct triangle a)
{
  a.area=0.5*(a.base+a.altitude);
}
void output(struct triangle a)
{
  printf("the area of triangle with base=%f and altitude=%f is %f",a.base,a.altitude,a.area);
}
int main()
{
 struct triangle t;
 t=input_triangle();
 find_area(t);
 output(t);
 return 0;
}
