// https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
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
// *              Campeao: Lucas!                                           *
// *              Rodada #1: Lucas foi o vencedor                           *
// *              Rodada #2: Lucas foi o vencedor                           *
// *              Rodada #3: Lucas foi o vencedor                           *
// *              Rodada #4: Lucas foi o vencedor                           *
// *              Rodada #5: Lucas foi o vencedor                           *
// *              Rodada #6: Lucas foi o vencedor                           *
// *              Rodada #7: Lucas foi o vencedor                           *
// *              Rodada #8: Lucas foi o vencedor                           *
// *              Rodada #9: Lucas foi o vencedor                           *
// *              Rodada #10: Lucas foi o vencedor                          *
// *     Elapsed: 0.02s                                                     *
// *  URI Output: Wrong answer (10%) (Why? overflow)                        *
// **************************************************************************
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define printf __mingw_printf // apenas se tiver usando CodeBlocks no windows. Remover no URI.

long double factorial(long double n) {
    //printf("%Lg \n", n);
    if ((n==1) || (n==0)) return 1;
   return factorial(n-1)*n;
}
long double Powx(long double base, long double exp){
    return pow(base, exp);
}
int main(){
    //printf("%5.50Lg\n", factorial(100) );
    //return;
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


