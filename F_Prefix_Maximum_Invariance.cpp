import math
import sys

def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    index = 1
    output_lines = []
    for _ in range(t):
        n = int(data[index]); index += 1
        a = list(map(int, data[index:index+n])); index += n
        b = list(map(int, data[index:index+n])); index += n
        
        if n == 0:
            output_lines.append("0")
            continue
            
        L = [-1] * n
        stack = []
        for i in range(n):
            while stack and a[stack[-1]] < a[i]:
                stack.pop()
            if stack:
                L[i] = stack[-1]
            else:
                L[i] = -1
            stack.append(i)
        
        k = math.floor(math.log2(n)) + 1
        st = [[0] * n for _ in range(k)]
        for i in range(n):
            st[0][i] = a[i]
        
        for j in range(1, k):
            step = 1 << (j-1)
            for i in range(0, n - (1 << j) + 1):
                st[j][i] = max(st[j-1][i], st[j-1][i+step])
                
        def query_max(l, r):
            if l > r:
                return 0
            length = r - l + 1
            j = math.floor(math.log2(length))
            return max(st[j][l], st[j][r - (1 << j) + 1])
        
        total_ans = 0
        for i in range(n):
            if L[i] == -1:
                if b[i] == a[i]:
                    total_ans += (i+1) * (n - i)
            else:
                if b[i] == a[i]:
                    total_ans += (i - L[i]) * (n - i)
                if b[i] <= a[L[i]]:
                    total_ans += (L[i] + 1) * (n - i)
                else:
                    low, high = 0, L[i]
                    found = -1
                    while low <= high:
                        mid = (low + high) // 2
                        if query_max(mid, i) >= b[i]:
                            found = mid
                            high = mid - 1
                        else:
                            low = mid + 1
                    if found != -1:
                        total_ans += (L[i] - found + 1) * (n - i)
        output_lines.append(str(total_ans))
        
    sys.stdout.write("\n".join(output_lines))

if __name__ == "__main__":
    main()