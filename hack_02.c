/*
    Author: Yawar Hussain
    Date: 18/10/2023


*/
#include<stdio.h>
#include<math.h>
//globally decleare variable 
 double lon1,p1,lon2,p2,delta,Radius = 62371,Result=0;
//Function to convert Degree into Radian
int Degree_to_Radian(int num)
{
    float PI = 3.1416f;
    int radian = (num/180)*PI;

    return radian;
}

int main()
{
   

    printf("Enter the longitude of Origin in Degree [ -180 to 180 ] : ");
    scanf("%lf",&lon1);
    printf("Enter the latitude of Origin in Degree [ -90 to 90 ] : ");
    scanf("%lf",&p1);
    printf("Enter the longitude of Distination in Degree [ -180 to 180 ] : ");
    scanf("%lf",&lon2);
    printf("Enter the latitude of Distination in Degree [ -90 to 90 ] : ");
    scanf("%lf",&p2);

    delta = lon1 - lon2;    

    printf("Location Distance \n");
    printf("===================\n");
    printf("Origin : %lf %lf \n",lon1,p1);
    printf("Distination : %lf %lf \n",lon2,p2);

    //calling Degree_to_Radian Function 
    lon1 = Degree_to_Radian(lon1);
    p1 = Degree_to_Radian(p1);
    lon2 = Degree_to_Radian(lon2);
    p2 = Degree_to_Radian(p2);


    Result = acos((sin(p1) * sin(p2) + cos(p1) * cos(p2) * cos(delta)))*Radius;
    printf("Air distance is %lf kms \n",Result);

    return 0;
}