#include<stdio.h>
#include<conio.h>
int main()
{
    int ales,yds,mo;
    printf("ales puani:");
    scanf("%d",&ales);
    printf("yds puani:");
    scanf("%d",&yds);
    printf("mezuniyet ortalamasi:");
    scanf("%d",&mo);

    float sonuc;
    sonuc=(ales/2)+(yds/4)+(mo/4);
    if(sonuc>60)
    {
        if(yds>70){
            printf("alindiniz");
        }}
    else
    {
        printf("alinmadiniz");

        
    }
    getch();
    return 0;


}