#include<stdio.h>
    int main (){
        int sec,hr,min,re_sec;
        printf("given input seconds = ");
        scanf("%d",&sec);
        hr = (sec/3600);
        min = (sec-(3600*hr))/60;
        re_sec = (sec-(3600*hr)-(min*60));
        printf("%d:%d:%d",hr,min,re_sec);
        return 0;
    }