import sys
input_data =sys.stdin.read().split()
idx=0
t=int(input_data[idx]);idx+=1
results=[]
for _ in range(t):
    n = int(input_data[idx]); a=int(input_data[idx+1]);b=int(input_data[idx+2])
    idx+=3
    groups =n//3
    rem =n%3
    cost_per_full_group=min(3*a,b)
    total =groups * cost_per_full_group
    if rem>0:
        total+=min(rem * a,b)
    results.append(str(total))
print('\n'.join(results))
