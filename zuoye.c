#include<stdio.h>
int main (void)
{
    int n,A,B,C,D,E;
    printf("Enter n:");
    scanf("%d",&n);

    if(n<100){
       printf("A\n");
    }
    if(n<90){
        printf("B\n");
    }
    if(n<80){
        printf("C\n");
    }
    if(n<70){
        printf("D\n");
    }
    if(n<60){
        printf("E\n");
    }
    
    return 0;
} 
