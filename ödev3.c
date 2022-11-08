#include<stdio.h>
int main()
{
    int a,b,satir;
    int yildiz=1;
    printf("satir sayisi giriniz:");
    scanf("%d", &satir);
    
    
    for(a=1;a<=satir;a++)
    {
        for(b=1;b<=yildiz;b++)
        
        printf("#");
        printf("\n");
        yildiz++;

    }
    return 0;

}