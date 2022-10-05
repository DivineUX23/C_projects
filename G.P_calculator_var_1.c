//GP calculator ver 1 in C (CORRECT)
//Gp calculator version 1.

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <cs50.h>



//Assigning letters to numbers


static const int points[UINT8_MAX + 1] = {

    ['a'] = 5, ['A'] = 5,
    ['b'] = 4, ['B'] = 4,
    ['c'] = 3, ['C'] = 3,
    ['d'] = 2, ['D'] = 2,
    ['e'] = 1, ['E'] = 1,
    ['f'] = 0, ['F'] = 0,

};

static int compute_sum(const char *word)
{
    const unsigned char *c;
    int sum = 0;

    for (c = (const unsigned char *) word; *c; c++)
        sum += points[(int) *c];

    return sum;
}


//============================


int main (void){


    printf("\n\n\t\tLet me help you calculate your GP\n\n\n");


    string N = get_string ("Please tell me your name? ");




//Input score and credit load for each subjects


    float Math = 0;

    int n = 0;

    do {


    n = get_int ("\n\nHow many courses did you take this semester? : ");

    }


    while (n < 1);

        for ( int i = 0; i < n; i++) {


    string S1 = get_string ("\n\nWhat subject? : \t\t");

    //printf ("\n\nYour %s score? :", S1 );

    string M = get_string ( "\nYour %s score? : \t\t", S1 );


    int score;

    score = compute_sum(M);

        float Mc = get_float ( "\nYour %s credit load? : \t", S1 );

        Math = score*Mc;

        printf ("\nYour %s", S1 );

            printf (" credit is : \t\t%.2f", Math);
                printf ("\n");

        Math += (score*Mc);

        }




//Total credit load for all subjects

    float Cr = get_float ("\n\nTotal credit load? : \t\t");


//Final calculation and GP score


int sum = 0, c, value;


    float sc = (Math)/Cr;

    printf ("\n\t\tYour GP is \t = \t[%.2f]", sc);




//Written feedback

    if (sc >= 4.5){

        printf ("\n\n\n\t\t***Wow! First class... %s, I always knew your were a genuis***\n", N);  }


        else if (sc >= 3.5) {

        printf ("\n\n\n\t\t***Second class upper! That's great %s***\n", N);

        }

    if (sc < 3.5){
        printf ("\n\n\n\t\t***Second class lower, I bet you'll do better next semester %s***\n", N); }


        else if (sc < 2.5) {

            printf ("\n\n\n\t\t***Third class, Don't let get to you %s... you can do better semester***\n", N);
        }

}


