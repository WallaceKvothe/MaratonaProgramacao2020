# https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
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
# *              Traceback (most recent call last):                        *
# *                File "teste.py", line 42, in <module>                   *
# *                  RespFac=factorial(Fact)                               *
# *                File "teste.py", line 33, in factorial                  *
# *                  return factorial(n-1)*n                               *
# *                File "teste.py", line 33, in factorial                  *
# *                  return factorial(n-1)*n                               *
# *                File "teste.py", line 33, in factorial                  *
# *                  return factorial(n-1)*n                               *
# *                [Previous line repeated 994 more times]                 *
# *                File "teste.py", line 32, in factorial                  *
# *                  if (n==1) or (n==0): return 1                         *
# *              RecursionError: maximum recursion depth exceeded in comparison*
# *     Elapsed: 0.05s                                                     *
# *  URI Output: Runtime error                                             *
# **************************************************************************
# Comentar sobre isso
#from sys import setrecursionlimit, getrecursionlimit
#setrecursionlimit(10**6)
#print(getrecursionlimit())
def factorial(n):
    if (n==1) or (n==0): return 1
    return factorial(n-1)*n
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
