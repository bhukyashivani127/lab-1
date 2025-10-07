//BHUKYA SHIVANI A23
//PROGRAM TO FIND THE AREA OF TRIANGLE WITH LENGTH AND BREATH OF THE TRIANGLE


#include<stdio.h>
int main() {
    float l,b,area;
    printf("enter the value of l="); // l denotes the value of length
    scanf("%f",&l);
    printf (" enter the vslue of b="); //b denotes the value of breath
    scanf ("%f",&b);
    area = (l * b)/2;
    printf(" the area of triangle for the given length amd breath=%f",area);
     
    return 0;
}