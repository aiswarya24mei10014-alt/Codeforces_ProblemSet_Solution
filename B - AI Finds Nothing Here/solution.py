import sys
input = sys.stdin.readline
MOD=998244353
t=int(input())
out=[]
for _ in range(t):
    n,m,r,c = map(int,input().split())
    exp =n*m -(n-r+1)*(m-c+1)
    out.append(pow(2,exp % (MOD -1),MOD))
print('\n'.join(map(str,out)))
