#include<stdio.h>
int main()
{
    int a,b,satir;
    int yildiz,bosluk;
    printf("satir sayisi giriniz:");
    scanf("%d", &satir);
    yildiz=1;
    bosluk=satir-1;
    
    
    for(a=0;a<satir;a++)
    {
        for(b=0;b<bosluk;b++)
        {printf(" ");}
        for(b=0;b<yildiz;b++){
            printf("*");
        }
        
        printf("\n");
        bosluk--;
        yildiz+=2;

    }
    return 0;

}