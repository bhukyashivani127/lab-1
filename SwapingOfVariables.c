//BHUKYA SHIVANI A23
//PROGRAM TO SWAP TWO VARIABLES USING THE THIRD VARIABLE

#include<stdio.h>
int main(){
    int x,y,z;
   printf("first variable x = ");
   scanf("%d",&x);
   printf("second variable y = ");
  scanf("%d",&y);
   z=x;
   x=y;
   y=z;
 printf("x=%d,y=%d",x,y);
    return 0;
}