# https://www.urionlinejudge.com.br/judge/pt/problems/view/1805
# **************************************************************************
# *  By Elder Sobrinho - UFTM                                              *
# *  Case Input: 1 1000000000  Output: 500000000500000000  Elapsed: 142.60s*
# *  URI Output: Time limit exceeded                                       *
# **************************************************************************
s=0
a,b=map(int,input().split())
while(a<=b):
    s+=a
    a+=1
print("%i"%s)