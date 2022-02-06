#include <stdio.h>
#include <cctype>
#include <iostream>
#define MAX_LEN 128
using namespace std;

int str_len( char s[] )
{
    int len;
    for( len = 0; s[ len ] != '\0'; len++ );
    return len;
}

int lwr_str_cnt( char s[] )
{
    int lower = 0;
    for (int i = 0; i < str_len(s); i++) {
        if(s[i]>='a' && s[i]<='z'){
            lower++;
    }

    }
    return lower;
}

int upr_str_cnt( char s[] ) {
    int upper = 0;
    for (int i = 0; i < str_len(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        }
    }
    return upper;
}

int dgt_str_cnt( char s[] )
{
    int counter = 0;
    for (int i = 0; i < str_len(s) ; i++) {
        if (isdigit(s[i])) {
            counter++;
        }
    }
    return counter;
}

int nalpha_str_cnt( char s[] ) {
    int different = 0;
    for (int i = 0; i < str_len(s); i++) {
        if (!(isdigit(s[i]) || isalpha(s[i]))) {
            different++;
        }
    }
    return different;
}

int chr_str_cnt( char c, char s[] ) {
    int counter = 0;
    for (int i = 0; i < str_len(s) ; i++) {
        if (s[i]==c) {
            counter++;
        }
    }
    return counter;
}

int chr_str_pos( char c, char s[] )
{
    int index = -1;
    for (int i = 0; i < str_len(s) ; i++) {
        if (s[i]==c) {
            index=i;
            break;
        }
    }
    return index;

}

int chr_str_rpos( char c, char s[] )
{
    int index = -1;
    for (int i = 0; i < str_len(s) ; i++) {
        if (s[i]==c) {
            index=i;
        }
    }
    return index;
}

void str_rev( char s[] )
{
    for (int i = str_len(s); i >=0; i--) {
        cout << s[i];
    }
}
int main()
{
    char line[MAX_LEN];
    char c;
    int pos;
    printf( "\n\nWpisz linie tekstu: " );
    gets( line );
    printf( "\nLiczba znakow : %d", str_len( line ) );
    printf( "\nLiczba malych liter : %d", lwr_str_cnt( line ) );
    printf( "\nLiczba duzych liter : %d", upr_str_cnt( line ) );
    printf( "\nLiczba cyfr : %d", dgt_str_cnt( line ) );
    printf( "\nLiczba innych znakow : %d", nalpha_str_cnt( line ) );
    printf( "\n\nPodaj pojedynczy znak: " );
    c = getchar();
    fflush( stdin );
    printf( "\nLiczba wystapien znaku %c : %d", c,
            chr_str_cnt( c, line ) );
    if( ( pos = chr_str_pos( c, line ) ) != -1 )
        printf( "\nPierwsze wystapienie znaku %c od poczatku : %d", c,
                pos + 1 );
    else
        printf( "\nZnak %c nie zostal znaleziony", c );
    if( ( pos = chr_str_rpos( c, line ) ) != -1 )
        printf( "\nPierwsze wystapienie znaku %c od konca : %d", c,
                pos + 1 );
    else
        printf( "\nZnak %c nie zostal znaleziony", c );
    printf( "\n\nNapis oryginalny : %s", line );
    printf( "\nNapis odwrocony : ");
    str_rev( line );
    ( void )getchar();
    return 0;
}