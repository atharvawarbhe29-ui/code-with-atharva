#include <studio.h>
int main()
{
  char name [20];
  int age;
  printf("enter your name:);
  scanf("%s", name);

  printf("enter your age:");
  scanf("%d", & age);
  printf("hello %s , you are %d year old.\n",name age); // this is a program related to age
  return 0;
}
