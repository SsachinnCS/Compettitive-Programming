import math

def can_form_square(l1, b1, l2, b2, l3, b3):
    total_area = l1 * b1 + l2 * b2 + l3 * b3
    s = int(math.isqrt(total_area))
    if s * s != total_area:
        return False
    
    # All rectangles in a single row (sum of breadths equals s)
    if b1 + b2 + b3 == s and max(l1, l2, l3) <= s:
        return True
    # All rectangles in a single column (sum of lengths equals s)
    if l1 + l2 + l3 == s and max(b1, b2, b3) <= s:
        return True
    
    # Two rectangles in a row, third in a column
    if b1 + b2 == s and l1 <= s and l2 <= s and l3 <= s and b3 <= s:
        return True
    if b1 + b3 == s and l1 <= s and l3 <= s and l2 <= s and b2 <= s:
        return True
    if b2 + b3 == s and l2 <= s and l3 <= s and l1 <= s and b1 <= s:
        return True
    
    # Two rectangles in a column, third in a row
    if l1 + l2 == s and b1 <= s and b2 <= s and b3 <= s and l3 <= s:
        return True
    if l1 + l3 == s and b1 <= s and b3 <= s and b2 <= s and l2 <= s:
        return True
    if l2 + l3 == s and b2 <= s and b3 <= s and b1 <= s and l1 <= s:
        return True
    
    # One rectangle beside two stacked
    if l1 == s and b2 + b3 == s and l2 + l3 <= s:
        return True
    if l2 == s and b1 + b3 == s and l1 + l3 <= s:
        return True
    if l3 == s and b1 + b2 == s and l1 + l2 <= s:
        return True
    
    # Two rectangles stacked beside one
    if b1 == s and l2 + l3 == s and b2 + b3 <= s:
        return True
    if b2 == s and l1 + l3 == s and b1 + b3 <= s:
        return True
    if b3 == s and l1 + l2 == s and b1 + b2 <= s:
        return True
    
    return False

t = int(input())
for _ in range(t):
    l1, b1, l2, b2, l3, b3 = map(int, input().split())
    if can_form_square(l1, b1, l2, b2, l3, b3):
        print("YES")
    else:
        print("NO")