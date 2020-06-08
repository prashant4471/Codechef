t=int(input())
while t>0:
    n=int(input())
    mydict={}
    for i in range(n):
        name, value = input().strip().split()

        value = int(value)

        if value == 0:
            if name in mydict.keys():
                mydict[name][0] += 1

            else:
                mydict[name] = [1, 0]

        elif value == 1:
            if name in mydict.keys():
                mydict[name][1] += 1

            else:
                mydict[name] = [0, 1]

    sum=0
    for i in mydict.keys():
        sum+= max(mydict[i])

    print(sum)
    t-=1
