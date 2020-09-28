// https://www.urionlinejudge.com.br/judge/pt/problems/view/1805
// https://math.stackexchange.com/questions/1692833/get-the-sum-of-numbers-from-75-to-995-with-interval-of-5
// https://brilliant.org/wiki/counting-integers-in-a-range/
// **************************************************************************
// *  By Elder Sobrinho - UFTM                                              *
// *  Case Input: 1 1000000000  Output: 500000000500000000  Elapsed: 0.01s  *
// *  URI Output: Accepted                                                  *
// **************************************************************************
#include <stdio.h>
#include <stdlib.h>
int main(){
	long long int a, b, n, soma;
	scanf("%lld %lld", &a, &b);
	n = b-a+1;
	soma = ((a+b)*n)/2;
	printf("%lld\n", soma);
	return 0;
}
