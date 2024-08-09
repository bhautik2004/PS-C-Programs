/*
  15. Write a program to find roots of quadratic equations.
  author : Bhautik Thummar
  Date : 8-9-2024
*/
# include<stdio.h>
#include<conio.h>
# include<math.h>

void main () {
    float a,b,c,r1,r2,d;
    clrscr();
    printf ("Enter the values of a b c: ");
    scanf (" %f %f %f", &a, &b, &c);
    
    d= b*b - 4*a*c;
    
    if (d>0) {
        r1 = -b+sqrt (d) / (2*a);
        r2 = -b-sqrt (d) / (2*a);
        printf ("The real roots = %f %f", r1, r2);
    }
    else if (d==0) {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf ("Roots are equal =%f %f", r1, r2);
    }
    else
	printf("Roots are invalid.");
    getch();
}

