#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Coloque a primeira nota: ");
    scanf("%f", &n1);

    printf("Coloque a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("Voce foi Aprovado, sua media e %.2f", media);
    } else if (media >= 4) {
        printf("Voce esta de exame, sua media e %.2f", media);
    } else {
        printf("Voce foi Reprovado, sua media e %.2f", media);
    }    
    
    return 0;
}
