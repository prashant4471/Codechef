t=int(input())
for i in range(t):
    d = int(input())
    m=5
    count=0
    while (d/m>=1) :
        count += int(d/m)
        m *= 5
    print(count)