import sys
input = sys.stdin.readline
 
t = int(input())
out=[]
for _ in range(t):
    x,y = map(int,input().split())
    out.append("YES" if x%y ==0 else "NO")
print("\n".join(out))
