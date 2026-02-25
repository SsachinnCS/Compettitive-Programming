import sys

def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    index = 1
    out_lines = []
    for _ in range(t):
        n = int(data[index])
        index += 1
        b = list(map(int, data[index:index+n]))
        index += n
        
        groups = [[] for _ in range(n+1)]
        for i, k in enumerate(b):
            if k <= n:
                groups[k].append(i)
                
        valid = True
        for k in range(1, n+1):
            if len(groups[k]) % k != 0:
                valid = False
                break
                
        if not valid:
            out_lines.append("-1")
        else:
            a = [0] * n
            next_val = 1
            for k in range(1, n+1):
                L = groups[k]
                if not L:
                    continue
                m = len(L)
                for i in range(0, m, k):
                    for j in range(i, i+k):
                        idx = L[j]
                        a[idx] = next_val
                    next_val += 1
            out_lines.append(" ".join(map(str, a)))
            
    print("\n".join(out_lines))

if __name__ == "__main__":
    main()