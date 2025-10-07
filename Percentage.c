//BHUKYA SHIVANI
//PROGRAM T0 READ MARKS OF FIVE SUBJECTS OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE

#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,t,p;
printf("enter the marks  of m1=");
scanf("%f",&m1) ;//  m1  denotes telugu marks
printf ("Enter the marks of m2=");
scanf("%f",&m2); // m2 denotes  hindi marks
printf ("enter the value of m3=");
scanf("%f",&m3); // m3 denotes english marks
printf("enter the value of m4=");
scanf("%f",&m4); //m4 denotes maths marks 
printf("Enter the value of m5=");
scanf("%f",&m5); // m4 denotes physics marks
t=m1+m2+m3+m4+m5;
printf(" total sum of all the subjects is equal to %f",t); // t denotes the total sum of all subjects 
p=(m1+m2+m3+m4+m5)/100;
printf("the percentage of all the five subjects marks =%f",p);// p denotes the percentage marks of all subjects
return 0;
}


