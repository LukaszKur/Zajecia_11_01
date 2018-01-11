//
// Created by lukasz on 11.01.18.
//

#include <stdio.h>
//#include <ctype.h>

int main()
{
    //int a=0,b=0;
    const char tab[30]="AdFghfdsGDFcvbSerDeQ";
    int histagram[26]={0};
    char znak;
    int licz=0;
    while((znak=tab[licz]) !=0){
        if ((znak>='a')&&(znak<='z')) {
         ++histagram[znak-'a'];
        }
        ++licz;
    }
    for (int x = 0; x <26 ; ++x) {
        printf("%c->%d ", 'a'+x,histagram[x]);
    }
    licz=0;
    int histagram2[26]={0};
    while(tab[licz] !=0){
        znak = tab[licz];
        if ((znak>='A')&&(znak<='Z')) {
            ++histagram2[znak-'A'];
        }
        ++licz;
    }
    for (int x = 0; x <26 ; ++x) {
        printf("%c->%d ", 'A'+ x, histagram2[x]);
    }

    /*
     for (int i = 0; i <20 ; ++i) {
        if (islower(tab[i])) {
            a+=1;
        } else if (isupper(tab[i])) {
            b+=1;
        }
    }
    printf("Ilosc malych liter: %i\n",a);
    printf("Ilosc duzych liter: %i\n",b);
    */

    return 0;

}