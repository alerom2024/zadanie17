#include <stdio.h>

float obj_pr (float dlugosc, float szerokosc, float wysokosc) {
    float objetosc= dlugosc*szerokosc*wysokosc;

    return objetosc;
}

int main() {
    float dlugosc, szerokosc, wysokosc;

    printf("Podaj dlugosc prostopadloscianu:");
    scanf("%f", &dlugosc);

    printf("Podaj szerokosc prostopadloscianu:");
    scanf("%f", &szerokosc);

    printf("Podaj wysokosc prostopadloscianu:");
    scanf("%f", &wysokosc);

    float objetosc= obj_pr(dlugosc, szerokosc, wysokosc);
    printf("Objetosc prostopadloscianu to: %.2f\n", objetosc);

    return(0);
}
