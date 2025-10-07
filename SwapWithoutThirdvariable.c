//BHUKYA SHIVANI A23
//PROGRAM TO SWAP TWO VARIABLES USING THE THIRD VARIABLE

#include<stdio.h>
int main(){
    int x,y;
    printf("first variable x = ");
   scanf("%d",&x);
   printf("second variable y = ");
  scanf("%d",&y);
  y=(x+y)-x;
  x=(x+y)-y;
  printf("x= %d ,y= %d ",y,x);
    return 0;
}