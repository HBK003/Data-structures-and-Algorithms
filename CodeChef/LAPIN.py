# cook your dish here
from collections import defaultdict
t = int(input())
while t :
    s = input()
    i = 0
    j = len(s)-1
    d = defaultdict(int)
    while i < j :
        d[s[i]] += 1
        d[s[j]] -= 1
        i += 1
        j -= 1
    if list(d.values()).count(0) == len(d) :
        print("YES")
    else :
        print("NO")
    t -= 1
    
