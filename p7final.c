#include<stdio.h>
struct _triangle 
{
  float base,height,area;
};
typedef struct _triangle Triangle;
struct _triangle input_triangle()
{
  Triangle t;
  printf("enter base:\n");
  scanf("%f",&t.base);
  printf("enter altitude:\n");
  scanf("%f",&t.height);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->gdbheight;
}
void output(Triangle t)
{
  printf("the area of triangle with base=%f and altitude=%f is %f\n",t.base,t.height,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}