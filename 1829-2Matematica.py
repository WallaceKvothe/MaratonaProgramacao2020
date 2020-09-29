# https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
# https://math.stackexchange.com/questions/2319182/calculating-large-factorials-without-a-calculator
# https://www.geeksforgeeks.org/calculating-factorials-using-stirling-approximation/
# https://www.geeksforgeeks.org/factorial-of-large-numbers-using-logarithmic-identity/
# http://mathforum.org/library/drmath/view/55569.html  # TOP
# https://www.geeksforgeeks.org/factorial-of-large-numbers-using-logarithmic-identity/  # TOP
# https://math.stackexchange.com/questions/2696344/is-there-a-way-to-find-the-log-of-very-large-numbers
# https://www.quora.com/How-do-I-find-the-factorial-of-a-large-number
# **************************************************************************
# *  By Elder Sobrinho - UFTM                                              *
# *  Case Input:                                                           *
# *              10                                                        *
# *              9344^9910                                                 *
# *              6575!                                                     *
# *              3537^2237                                                 *
# *              7428!                                                     *
# *              1329^1000                                                 *
# *              5066!                                                     *
# *              1707^8066                                                 *
# *              4220!                                                     *
# *              9407^2487                                                 *
# *              6572!                                                     *
# *              4553^507                                                  *
# *              9384!                                                     *
# *              9082^1917                                                 *
# *              3877!                                                     *
# *              9377^1492                                                 *
# *              8425!                                                     *
# *              2159^8895                                                 *
# *              4089!                                                     *
# *              3680^6548                                                 *
# *              9083!                                                     *
# *      Output:                                                           *
# *              Campeao: Pedro!                                           *
# *              Rodada #1: Lucas foi o vencedor                           *
# *              Rodada #2: Pedro foi o vencedor                           *
# *              Rodada #3: Pedro foi o vencedor                           *
# *              Rodada #4: Lucas foi o vencedor                           *
# *              Rodada #5: Pedro foi o vencedor                           *
# *              Rodada #6: Pedro foi o vencedor                           *
# *              Rodada #7: Pedro foi o vencedor                           *
# *              Rodada #8: Pedro foi o vencedor                           *
# *              Rodada #9: Lucas foi o vencedor                           *
# *              Rodada #10: Pedro foi o vencedor                          *
# *     Elapsed: 0.10s                                                     *
# *  URI Output: Accepted                                                  *
# **************************************************************************
from math import log, fmod
def factorial(n):
    sum=0
    if (n == 0): return sum;
    for counter in range(1,n+1):
        sum+=log(counter)
    return sum
def Powx(base, exp):
    passo=2; sum=0;
    Resto=fmod(exp,passo)
    DivInt=exp//passo
    while(DivInt):
        sum+=log(base ** passo)
        DivInt-=1
    sum+=log(base ** Resto)
    return sum;

n=int(input())
Pedro=Lucas=0; Out=[0]*n
for ii in range(n):
    Base,Exp=map(int,input().split("^"))
    Fact=int(input().split("!")[0])
    RespFac=factorial(Fact)
    RespPow=Powx(Base, Exp)
    if (RespFac>RespPow): Pedro+=1
    else: Lucas+=1
    Out[ii]=RespFac>RespPow

if (Pedro==Lucas): 
    print("A competicao terminou empatada!");
elif (Pedro>Lucas):
    print("Campeao: Pedro!");
else:
    print("Campeao: Lucas!");
for ii in range(n):
    if (Out[ii]):
        print("Rodada #{}: Pedro foi o vencedor".format(ii+1));
    else:
        print("Rodada #{}: Lucas foi o vencedor".format(ii+1));
