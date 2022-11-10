#include <iostream>
using namespace std;
int main() {
    int f =5;
    int c = 5;
    int **A = new int *[f];
    int S[] = {'p','a','a','s','o',
                'r','t','v','o','g',
                'e','t','r','e','i',
                'k','s','s','y','p'};

    char Pa[] = {'a','v','e'};

    for(int **p = A; p < A + f; p++){
        *p = new int[c];
    }
    for(int **q = A; q < A + f; q++){
       for(int *r = *q, *i = S; r < *q + c, i < S+24; r++, i++){
        *r = *i;
        cout << (char) *r << ' ';
       }
    }
}