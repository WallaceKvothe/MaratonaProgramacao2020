// https://www.urionlinejudge.com.br/judge/pt/problems/view/1805
// **************************************************************************
// *  By Elder Sobrinho - UFTM                                              *
// *  Case Input: 1 1000000000  Output: 500000000500000000  Elapsed: 0.89s  *
// *  URI Output: Accepted                                                  *
// **************************************************************************
#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int a,b,s=0;
    scanf("%lld %lld", &a, &b);
    for( ;a<=b; a++)
        s += a;
    printf("%lld\n", s );
    return 0;
}
