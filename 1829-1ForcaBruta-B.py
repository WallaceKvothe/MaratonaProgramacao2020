# https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
# https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
# https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/
# https://www.geeksforgeeks.org/writing-power-function-for-large-numbers/
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
# *     Elapsed: 0.17s                                                     *
# *  URI Output: Time limit exceeded (OK on Output, but...)                *
# **************************************************************************
# Comentar: Python já implementa nativamente operações com grendes números..
def factorial(n):
    R = 1
    while n>=1:
        R*=n
        n-=1
    return R
def Powx(base, exp):
    return base ** exp

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
    #print(RespFac)
    #print(RespPow)

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
