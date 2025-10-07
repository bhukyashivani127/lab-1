//BHUKYA SHIVANI A23
// PROGRAM TO CALCULATE SIMPLE INTEREST
#include<stdio.h>
int main(){
    float p,t,r,si;
    printf("enter the value of p:");
    scanf("%f",&p); // p denotes principal amount
    printf("enter the value of r:");
    scanf("%f",&r); // r stands for rate
    printf("enter the value of t:");

    scanf("%f",&t); // t stands for time period
     si=(p*t*r)/100 ;// si stands for simple interest
    printf("simple interest is equal to :%f",si);
    


    return 0;
}