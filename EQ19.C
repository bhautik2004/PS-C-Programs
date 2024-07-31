/*
  19.WAP in c to calculate volume of cone (Volume=1/3*PI*radius*radius*height);
  author:Bhautik Thummar
  date:31-7-2024

*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float VolumeOfCone(float radius,float height){
	float volume;
	volume = 1/3*(PI*radius*radius*height);
	return volume;

}
void main(){
	float radius,height,volume;
	clrscr();
	printf("Enter Value Of Radius:: ");
	scanf("%f",&radius);
	printf("Enter Value Of Heigt:: ");
	scanf("%f",&height);
	volume = VolumeOfCone(radius,height);
	printf("Volume Of Cone = %f",volume);
	getch();

}

/*
  output:

  Enter Value Of Radius:: 433
Enter Value Of Heigt:: 233
Volume Of Cone = 0.000000














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/