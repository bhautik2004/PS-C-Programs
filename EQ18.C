/*
  18.WAP in c to convert angle in degrees to radius using formula angle in radius=(angle in degrees*PI/180).
  author:Bhautik Thummar
  Date:31-7-2024
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float AngleInRadius(float angleindegrees){
	float angleinradius;
	angleinradius = (angleindegrees*PI)/180;
	return angleinradius;

}
void main(){
	float angleindegrees,angleinradius;
	clrscr();
	printf("Entyer Angle In Degrees :: ");
	scanf("%d",&angleindegrees);
	angleinradius=AngleInRadius(angleindegrees);
	printf("Angle In Radius = %g",angleinradius);
	getch();
}
/*
  output:
  Entyer Angle In Degrees :: 223
Angle In Radius = -1.24714e-31                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


*/