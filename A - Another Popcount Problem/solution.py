import sys
def solve():
    input_data = sys.stdin.buffer.read().split()
    idx = 0
    t = int(input_data[idx]);idx +=1
    out=[]
    for _ in range(t):
        n = int(input_data[idx]);k = int(input_data[idx+1]); idx +=2
        remaining= n
        bits =0
        cost =1
        while cost <= remaining:
            max_items = remaining // cost
            items = k if k< max_items else max_items
            bits += items
            remaining -=items * cost
            if items <k:
                break
            cost <<=1
        out.append(str(bits))
    print('\n'.join(out))
solve()
