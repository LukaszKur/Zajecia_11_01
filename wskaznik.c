//
// Created by lukasz on 11.01.18.
//

#include <stdio.h>

int main()
{
    /*char *napis="waniki.";
    *(napis+1)='y';

    printf("%s\n", napis);
     */
    char napis[16]="pamolka";

    *(napis+1 )='o';
    napis[3]='y';
    printf("%s\n", napis);

return 0;

}
