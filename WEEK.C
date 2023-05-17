#include<stdio.h>
#include<conio.h>

main()
{
    int week;
    clrscr();
    printf("enter week name");
    scanf("%d",&week);

    switch(week)
    {
     case m:
       printf("monday");
       break;
     case t:
       printf("tuesday");
       break;
     case w:
       printf("wensday");
       break;
     case T:
       printf("thursday");
       break;
     case f:
       printf("friday");
       break;
     case s:
       printf("saturday");
       break;
      case S:
	printf("sunday");
	break;
       }
       getch();
}
