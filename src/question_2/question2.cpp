#include "question2.h"

int find_gcd(int n1, int n2) {
    auto smaller = 0;

    if (n1 > n2) {
        smaller = n2;
    } else {
        smaller = n1;
    }

    auto answer = -1;
    for (auto i = 1; i <= smaller; i++) {
        if ((n1 % i == 0) and (n2 % i == 0)) {
            answer = i;
        }
    }
    if (answer == 1) {
        return -1;
    }

    return answer;

}
