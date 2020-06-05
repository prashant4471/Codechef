t = int(input())
while t > 0:
    n = int(input())
    l=[]
    flag=0
    for i in range(0,n):
        for j in range(n*i+1,(n*i)+n+1):
            l.append(j)
        if flag==0:
            print(*l,sep=" ")
            l.clear()
            flag=1
        else:
            l.reverse()
            print(*l,sep=" ")
            l.clear()
            flag=0
    t-=1

