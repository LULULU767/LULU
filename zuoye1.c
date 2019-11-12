#include<stdio.h>
int main()
{
    int N,n,score;
    printf("Enter N is \n");
    scanf("%d",&N);
    for(n=1;n<=N;n++){
        printf("Enter score is \n");
        scanf("%d",&score);
        if(score>=90){
            printf("%2d  A  ",score);
        }else if(score>=80){
            printf("%2d  B  ",score);
        }else if(score>=70){
            printf("%2d  C  ",score);
        }else if(score>=60){
            printf("%2d  D  ",score);
        }else{
            printf("%2d  E  ",score);
        }
    }
    return 0;
}