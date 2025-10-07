#include<stdio.h>
int main() {
int sec,hr,min;
printf("seconds =");
scanf ("%d",&sec);
//calculate hours ,minutes,remaining seconds
hr = (sec/3600);
min = (sec-(3600*hr))/60;
sec = (sec-(3600*hr)-(min*60));
printf("seconds in hours=%d\n",hr);
printf("seconds in minutes=%d\n",min);
printf("seconds in remaining seconds=%d\n",sec);

    return 0;
}