#include<stdio.h>
#include<conio.h>
int main()
{
    int kilo;
    printf("kilonuzu giriniz: ");
    scanf("%d",&kilo);
    float boy;
    printf("boyunuzu giriniz: ");
    scanf("%f",&boy);

    float sonuc;
    sonuc=kilo/(boy*boy);
    printf("vucut kitle endeksi: %f\n", sonuc);

    if(sonuc<18.5){
        printf("zayif");
        }
        if(18.5<sonuc && sonuc<24.9){
            printf("normal");
        }
        if(25<sonuc && sonuc<29.9){
            printf("fazla kilolu");
        }
        if(30<sonuc && sonuc<34.9){
            printf("sisman");
        }
        if(sonuc>35){
            printf("obez");
        }
        getch();
        return 0;
    }

