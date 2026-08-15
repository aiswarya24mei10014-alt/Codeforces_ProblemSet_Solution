import sys

def main():
    input_data = sys.stdin.read().split()
    idx = 0
    t = int(input_data[idx]); idx += 1
    results = []
    for _ in range(t):
        a, b, c = sorted((int(input_data[idx]), int(input_data[idx+1]), int(input_data[idx+2])))
        idx += 3
        results.append(str(min(c - a, b)))
    print('\n'.join(results))

main()
