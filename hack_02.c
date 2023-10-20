/*
    Author: Yawar Hussain
    Date: 18/10/2023


*/
#include<stdio.h>

//globally decleare variable 
 double lon1,p1,lon2,p2,delta,Radius = 62371;
//Function to convert Degree into Radian
int Degree_to_Radian(int num)
{
    float PI = 3.1416f;
    int radian = (num/180)*PI;
}

int main()
{
   

    printf("Enter the longitude of Origin in Degree [ -180 to 180 ] : ");
    scanf("%lf",&lon1);
    printf("Enter the latitude of Origin in Degree [ -90 to 90 ] : ");
    scanf("%lf",&p1);
    printf("Enter the longitude of Origin in Degree [ -180 to 180 ] : ");
    scanf("%lf",&lon2);
    printf("Enter the latitude of Distination in Degree [ -90 to 90 ] : ");
    scanf("%lf",&p2);

    delta = lon1 - lon2;    


    return 0;
}