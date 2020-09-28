# https://www.urionlinejudge.com.br/judge/pt/problems/view/1805
# **************************************************************************
# *  By Elder Sobrinho - UFTM                                              *
# *  Case Input: 1 1000000000  Output: 500000000500000000  Elapsed: 86.09s *
# *  URI Output: Time limit exceeded                                       *
# **************************************************************************
s=0
a,b=map(int,input().split())
for i in range(a,b+1):
    s += i;
print("%i"%s)