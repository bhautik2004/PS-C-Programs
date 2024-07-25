/*
  9. WAP in c to find circumference of a circle.(2*pi*r)
  author : Bhautik Thummar
  date: 25:7:2024
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float CircumferenceOfCircle(float radius){
	float circumference;
	circumference=PI*(radius*radius);
	return circumference;
}
void main(){
	float circumference,radius;
	clrscr();
	printf("Enter Value Of Radius: ");
	scanf("%f",&radius);
	circumference=CircumferenceOfCircle(radius);
	printf("circumference Of Circle  = %f",circumference);
	getch();

}

/*
  output:
  Enter Value Of Radius: 45
circumference Of Circle  = 6358.500000




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/