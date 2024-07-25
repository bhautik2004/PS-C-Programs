
/*
 5. Write a Program to volume of cube (area=l*b*h)
 author: Thummar Bhautik
*/
#include<stdio.h>
#include<conio.h>
float VolumeOfCube(float l,float b, float h){
	float area;
	area=l*b*h;
	return area;
}
void main(){
	float l,b,h;
	clrscr();
	printf("Enter Value Of length");
	scanf("%f",&l);
	printf("Enter Value Of Width");
	scanf("%f",&b);
	printf("Enter Value Of Height");
	scanf("%f",&h);
	printf("The Volume Of Cube Is %f",VolumeOfCube(l,b,h));
	getch();
}
 /*
   Enter Value Of length40
Enter Value Of Width43                                                          
Enter Value Of Height44                                                         
The Volume Of Cube Is 75680.000000                                              
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

 */
