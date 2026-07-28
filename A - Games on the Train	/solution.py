import sys
input = sys.stdin.readline
t=int(input())
res=[]
for _ in range(t):
    n = int(input())
    h = list(map(int,input().split()))
    res.append(str(max(h) - min(h)+1))
print('\n'.join(res))
