/*
  16.WAP to check whether tringle is scale.isosceles or equilateral tringle.
  author bhautik thummar
  date 8-9-2024
*/
#include<stdio.h>
#include<conio.h>

void CheckTringleType(int a, int b, int c) {
    if (a == b && b == c) {
	printf("Equilateral Triangle\n");
    } else if (a == b || b == c || c == a) {
	printf("Isosceles Triangle\n");
    } else {
	printf("Scalene Triangle\n");
    }
}

void main() {
    int a, b, c;
    clrscr();
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    CheckTringleType(a, b, c);
    getch();

}
/*
  output:
  Enter the lengths of the three sides of the triangle:
4
4                                                                               
4                                                                               
Equilateral Triangle                                                            
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/
