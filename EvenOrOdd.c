//BHUKYA SHIVANI A23
//PROGRAM TO FIND THE VALUE WHERTHER THE GIVEN VALUE IS EVEN OR ODD

#include<stdio.h>
int main(){
    int n;
printf(" given number :");
scanf("%d",&n);
if(n%2==0){
    printf("even ");
    if(n%2!=0){
        printf("odd");
    }
}
    return 0;
}