#include "question1.h"

int get_fib_sequence(int num) {

    int next_term = 0;
    int term1 = 0;
    int term2 = 1;

    if (num <= 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }

    num -= 2;
    do
    {
        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
        num--;
    } while (num >= 0);
     
    return next_term;
}