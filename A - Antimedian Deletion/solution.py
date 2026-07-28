import sys
data=sys.stdin.buffer.read().split()
idx=0
t=int(data[idx]);idx+=1
out=[]
for _ in range(t):
    n=int(data[idx]);idx+=1
    idx+=n
    if n==1:
        out.append("1")
    else:
        out.append(' '.join(['2']*n))
print('\n'.join(out))
