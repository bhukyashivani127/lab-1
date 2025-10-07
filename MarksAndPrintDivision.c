#include<stdio.h>
int main (){
    int s1,s2,s3;
    int total;
    float per;
     printf("s1=");
     scanf("%d",&s1) ;//s1 = 50 ;
     printf("s2=");
     scanf("%d",&s2); //s2 = 70 ;
     printf("s3=");
     scanf("%d",&s3);//s3 = 90;
     total= s1+s2+s3; // total calculation
      per = (float)total * 100/300;//percentage calculation
     printf("total marks:%d/n",total);
     printf("percentage is : %.2f\n",per); // checking division and printing 
      if( per >= 60) {
     printf("First division\n");
      } else if( per >= 50) {
        printf("second division");
      }  else if (per >=40){
      printf("third division");
     } else {
      printf("fail\n");
     }

    return 0;
}