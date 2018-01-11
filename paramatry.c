//
// Created by lukasz on 11.01.18.
//

#include <string.h>
#include <stdio.h>
int main(int liczba_slow, char* tablica_slow[])

{   char temp[200]={0};
    printf("Nazwa programu: %s\n",tablica_slow[0]);
    if (liczba_slow !=3 +1) {
        printf("Niepoprawna liczba parametrow!");
    }
    else {

        for (int licznik = 0; licznik < liczba_slow; ++licznik) {
            strcat(temp, tablica_slow[licznik]);
        }
        printf("%s\n",temp);
    }
    return 0;
}