/*
  9.WAP to calculate Area Of Circle (PI*r*r)
  author:Bhautik Thummar
  date:25:7:2024
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float AreaOfCircle(float radius){
	float area;
	area=PI*(radius*radius);
	return area;
}
void main(){
	float areaofcircle,radius;
	clrscr();
	printf("Enter Value Of Radius: ");
	scanf("%f",&radius);
	areaofcircle=AreaOfCircle(radius);
	printf("Area Of Circle  = %f",areaofcircle);
	getch();

}
/*
output:
  Enter Value Of Radius:5
Area Of Circle  = 78.500000



                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/