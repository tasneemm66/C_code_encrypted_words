#include <stdio.h>
#include <limits.h>


int main()
{
    char ch1='n';
    char ch2='e';
    char ch3='m';
    char ch4='o';

    char nch1=~ch1;
    char nch2=~ch2;
    char nch3=~ch3;
    char nch4=~ch4;

    printf("%c%c%c%c\n",ch1,ch2,ch3,ch4);
    printf("%c%c%c%c\n",nch1,nch2,nch3,nch4);
    /*%d will print the decimal value for inverse letters.*/


    return 0;
}
