import math
for _ in range(int(input())):
    n,k=map(int, input().split())
    l=list(map(int,input().split()))
    l.sort()
    e=l[k-1]
    l1=l[k:]
    c=l.count(e)
    d=c-l1.count(e)
    res = math.factorial(c) // (math.factorial(d) * math.factorial(c - d))
    print(res)
