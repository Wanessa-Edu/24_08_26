#include <stdio.h>

int main(){

    char nome[50];
    float n1, n2, n3, n4, media;

    printf("Digite N1...: ");
    scanf("%f", &n1);

    printf("Digite N2...: ");
    scanf("%f", &n2);

    printf("Digite N3...: ");
    scanf("%f", &n3);

    printf("Digite N4...: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) /4;

    if (media >= 0.0 && media <=39){
        printf("Caro %s, sua media: %.1f - Reprovado", nome, media);    //  VERDADEIRO
    } else if (media >= 40.0 && media <= 59){
        printf("Caro %s, sua media: %.1f - Sub", nome, media);
    }   else if(media >= 60.0 && media <= 100.0) {
        printf("Caro %s, sua media: %.1f - Aprovado", nome, media);
    }   else {
        printf("Caro %s, dados Incorretos, sua media: %1.f", nome, media);
    }


    return 0;

}