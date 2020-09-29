// https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
// https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/
// https://www.geeksforgeeks.org/writing-power-function-for-large-numbers/
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
// *     Elapsed: 6.30s                                                     *
// *  URI Output: Time limit exceeded  (OK on Output, but...)               *
// **************************************************************************
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000*5
int multiply(int x, int res[], int res_size){
    int carry = 0, i, prod;
    for (i=0; i<res_size; i++){
        prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry){
        res[res_size] = carry%10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}
int factorial(int n, int res[]){
    int res_size = 1, x, i; res[0]=1;
    for (x=2; x<=n; x++) res_size = multiply(x, res, res_size);
    return res_size;
}
int LargePow(int base, int exp, int res[]){
    int res_size = 1, x, i; res[0]=1;
    for (; exp>0; exp--) res_size = multiply(base, res, res_size);
    return res_size;
}
void Invet(int res[], int res_size){
    int tmp[MAX], i=0, j=0;
    for (i=res_size-1; i>=0; i--)      tmp[i]=res[i];
    for (i=res_size-1; i>=0; i--, j++) res[j]=tmp[i];
}
void Print(int res[], int res_size){
    int i;
    for (i=0;i<res_size;i++)
        printf("%d",res[i]);
    printf("\n");
}
int main(){
    int RespFactorial[MAX]={1,};
    int RespPow[MAX]={1,};
    int n, ii, Pedro=0, Lucas=0;
    scanf("%d", &n);
    int Out[n];
    for(ii=0;   ii<n; ii++){
        int Base=57, Exp=199, Fact=874;
        scanf("%d^%d", &Base, &Exp);
        scanf("%d!", &Fact);

        int RespFacSz=factorial(Fact, RespFactorial);
        //Invet(RespFactorial,RespFacSz);
        //Print(RespFactorial,RespFacSz);

        int RespPowSz=LargePow(Base, Exp, RespPow);
        //Invet(RespPow,RespPowSz);
        //Print(RespPow,RespPowSz);
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


