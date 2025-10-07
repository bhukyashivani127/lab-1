#include<stdio.h>
int main (){
    int mat,phy,che,ent_exam,cm;
printf("marks in mathematics out of 200=");
scanf("%d",&mat);
printf("marks in physics out of 200=");
scanf("%d",&phy);
printf("marks in chemistry out of 200=");
scanf("%d",&che);
printf("marks in entrance examination out of 100=");
scanf("%d",&ent_exam);
cm=mat/2 + phy/2 + che/2 + ent_exam/2;
printf("cutoff marks of all the subjects=%d",cm);
    return 0;
}