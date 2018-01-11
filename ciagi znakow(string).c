//
// Created by lukasz on 11.01.18.
//

#include <string.h>
#include <stdio.h>

int main()
{
    char ciag1[80];
    char ciag2[80];
    char  *tymczasowy;
    int wynik;

    printf("Podaj ciag pierwszy: \n");
    gets(ciag1);
    printf("Podaj ciag drugi: \n");
    gets(ciag2);

    wynik=strcmp(ciag1,ciag2);
    printf("wynik porownania: %d\n",wynik);

    tymczasowy=strstr(ciag1,ciag2);
    printf("Wynik: %s\n",tymczasowy ? tymczasowy : "nie zawiera");

    tymczasowy=strcat(ciag1,ciag2);
    printf("Wynik polaczenia: %s\n",ciag1);
    printf("Wynik polaczenia: %s\n",tymczasowy);


    return 0;

}