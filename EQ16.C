/*
  16.WAP to find out the volume of cylinder Volume=PI*r*r*height.
  author : Bhautik Thummar
  date:31-7-2024
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float VolumeOfCylinder(float radius,float height){
	float volume;
	volume=PI*radius*radius*height;
	return volume;
}
void main(){
	float radius,height,volume;
	clrscr();
	printf("Enter Value Of Radius:: ");
	scanf("%f",&radius);
	printf("Enter Value Of Height:: ");
	scanf("%f",&height);
	volume=VolumeOfCylinder(radius,height);
	printf("Volume Of Cylinder = %g",volume);
	getch();
}
/*
  output:
  Enter Value Of Radius:: 55
Enter Value Of Height:: 32                                                      
Volume Of Cylinder = 303952                                                     
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/