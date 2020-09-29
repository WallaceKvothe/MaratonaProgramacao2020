// https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
// https://math.stackexchange.com/questions/2319182/calculating-large-factorials-without-a-calculator
// https://www.geeksforgeeks.org/calculating-factorials-using-stirling-approximation/
// https://www.geeksforgeeks.org/factorial-of-large-numbers-using-logarithmic-identity/
// http://mathforum.org/library/drmath/view/55569.html  # TOP
// https://www.geeksforgeeks.org/factorial-of-large-numbers-using-logarithmic-identity/ # TOP
// https://math.stackexchange.com/questions/2696344/is-there-a-way-to-find-the-log-of-very-large-numbers
// https://www.quora.com/How-do-I-find-the-factorial-of-a-large-number
// **************************************************************************
// *  By Elder Sobrinho - UFTM                                              *
// *  Case Input:                                                           *
// *              10                                                        *
// *              9344^9910                                                 *
// *              6575!                                                     *
// *              3537^2237                                                 *
// *              7428!                                                     *
// *              1329^1000                                                 *
// *              5066!                                                     *
// *              1707^8066                                                 *
// *              4220!                                                     *
// *              9407^2487                                                 *
// *              6572!                                                     *
// *              4553^507                                                  *
// *              9384!                                                     *
// *              9082^1917                                                 *
// *              3877!                                                     *
// *              9377^1492                                                 *
// *              8425!                                                     *
// *              2159^8895                                                 *
// *              4089!                                                     *
// *              3680^6548                                                 *
// *              9083!                                                     *
// *      Output:                                                           *
// *              Campeao: Pedro!                                           *
// *              Rodada #1: Lucas foi o vencedor                           *
// *              Rodada #2: Pedro foi o vencedor                           *
// *              Rodada #3: Pedro foi o vencedor                           *
// *              Rodada #4: Lucas foi o vencedor                           *
// *              Rodada #5: Pedro foi o vencedor                           *
// *              Rodada #6: Pedro foi o vencedor                           *
// *              Rodada #7: Pedro foi o vencedor                           *
// *              Rodada #8: Pedro foi o vencedor                           *
// *              Rodada #9: Lucas foi o vencedor                           *
// *              Rodada #10: Pedro foi o vencedor                          *
// *     Elapsed: 0.02s                                                     *
// *  URI Output: Accepted                                                  *
// **************************************************************************
#include<stdio.h>
#include<stdlib.h>
long double factorial(long long n){
    unsigned long long counter;
    long double sum = 0;
    if (n == 0) return sum;
    for (counter = 1; counter <= n; counter++)
        sum = sum + log(counter);
    return sum;
}
long double Powx(long double base, long double exp){
    long double passo=2, sum=0;
    long double Resto=fmod(exp,passo);
    long int DivInt=exp/passo;
    while(DivInt--)
        sum+=log(pow(base,passo));
    sum+=log(pow(base,Resto));
    return sum;
}
int main(){
    int n, ii, Pedro=0, Lucas=0;
    scanf("%d", &n);
    int Out[n];
    for(ii=0;   ii<n; ii++){
        int Base=57, Exp=199, Fact=874;
        scanf("%d^%d", &Base, &Exp);
        scanf("%d!", &Fact);

        long double RespFacSz=factorial(Fact);
        long double RespPowSz=Powx(Base, Exp);

        if (RespFacSz>RespPowSz) Pedro++;
        else Lucas++;
        Out[ii]=RespFacSz>RespPowSz;
    }
    if (Pedro==Lucas)
        printf("A competicao terminou empatada!\n");
    else if (Pedro>Lucas)
        printf("Campeao: Pedro!\n");
    else
        printf("Campeao: Lucas!\n");
    for(ii=0;   ii<n; ii++)
        if (Out[ii])
            printf("Rodada #%d: Pedro foi o vencedor\n",ii+1);
        else
            printf("Rodada #%d: Lucas foi o vencedor\n",ii+1);
    return 0;
}


