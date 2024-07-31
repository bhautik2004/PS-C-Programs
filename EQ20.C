/*
  20.WAP That reads the radius of sphere "r" then it calculete it surface area "A"  using Formula (PI*r*r*4);
  author:Bhautik Thummar
  date:31-7-2024
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14

float SurfaceArea(float radiusofsphere){
	float surfacearea;
	surfacearea=PI*radiusofsphere*radiusofsphere*4;
	return surfacearea;
}
void main(){
	float radiusofsphere,surfacearea;
	clrscr();
	printf("Enter Value Of Radius Of Sphere: ");
	scanf("%f",&radiusofsphere);
	surfacearea=SurfaceArea(radiusofsphere);
	printf("Surface Area = %g",surfacearea);
	getch();
}
/*
  output:
  Enter Value Of Radius Of Sphere: 54
Surface Area = 36625                                                            
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/