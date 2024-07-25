/*
  14.WAp  in c to find out the area of right angle tringle using formula area=1/2*base*height.
  author:Thummar Bhautik
  date :26:7:2024
*/
#include<stdio.h>
#include<conio.h>
float AreaOfRightAngleTringle(float base,float height){
	float area;
	area=.5*(base*height);
	return area;
}
void main(){
	float area,base,height;
	clrscr();
	printf("Enter value of Base: ");
	scanf("%f",&base);
	printf("Enter Value of Height:");
	scanf("%f",&height);
	area=AreaOfRightAngleTringle(base,height);
	printf("Area = %f",area);
	getch();

}
/*
  output:
  Enter value of Base: 55
Enter Value of Height:32
Area = 10000.000000









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/