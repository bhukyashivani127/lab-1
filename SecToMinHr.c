//BHUKYA SHIVANI A23
//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS.
//WRITE PROGRAM TO CONVERT THIS NUMBER INTO NUMBER OF DAYS,HOURS AND MINUTES.
#include<stdio.h>
int main (){
 int sec,hr,min,days;
 printf("seconds in hours=");
 sec=31558150;
hr=(sec/3600);
printf("%d",hr);
printf("\n");
printf("seconds in minutes=");
min=(sec/60);
printf("%d",min);
printf("\n");
printf("seconds in days=");
days=(sec/86400);
printf("%d",days);
    return 0;
}