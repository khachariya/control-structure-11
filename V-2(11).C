#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();
  int number;
  printf("enter number=");
  scanf("%d",number);
  if(number<0)
  {
  printf("you value is negtive");
  }
  if(number>0)
  {
  printf("you value is positive");
  }
  if(number=0)
  printf("you value is neutral");

  getch();
}