/*
  17.WAP in c to read the distance between two cities in KM and print that distance in meters and feet..
  author:Bhautik Thummar
  Date:31-7-2024
*/
#include<stdio.h>
#include<conio.h>
float DistanceInMeter(float distanceinkm){
	float meter;
	meter=distanceinkm*1000;
	return meter;

}
float DistanceInFeet(float distanceinkm){
	float feet;
	feet=distanceinkm*3280.84;
	return feet;

}
void main(){
	float distanceinkm,meter,feet;
	clrscr();
	printf("Enter Distance in KM : ");
	scanf("%f",&distanceinkm);
	meter=DistanceInMeter(distanceinkm);
	printf("Distance in Meter = %g",meter);
	feet=DistanceInFeet(distanceinkm);
	printf("\nDistance in Feet = %g",feet);
	getch();

}
/*
  output:
  Enter Distance in KM : 4
Distance in Meter = 4000                                                        
Distance in Feet = 13123.4                                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/