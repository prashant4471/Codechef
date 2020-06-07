t=int(input())
while t>0:
    team=[]
    win=[]
    ind=[]
    score=[0,0,0,0]
    goal=[0,0,0,0]
    for i in range(12):
        l=list(input().split())
        if(team.count(l[0])==0):
            team.append(l[0])
        if(team.count(l[4])==0):
            team.append(l[4])
        m=int(l[1])-int(l[3])
        goal[team.index(l[0])]+=m
        n=int(l[3])-int(l[1])
        goal[team.index(l[4])]+=n
        if int(l[1])>int(l[3]):
            score[team.index(l[0])]+=3
            score[team.index(l[4])]+=0
        elif int(l[1])<int(l[3]):
            score[team.index(l[0])]+=0
            score[team.index(l[4])]+=3
        else:
            score[team.index(l[0])]+=1
            score[team.index(l[4])]+=1
    
    d=max(score)
    e = score.index(d)
    if(score.count(d)>1):
        for i in range(len(score)):
            if score[i]==d:
                ind.append(i)
        max1=-20
        for i in ind:
            if(goal[i]>max1):
                max1=goal[i]
        ind1=goal.index(max1)
        win.append(team[ind1])
        goal.pop(ind1)
        team.pop(ind1)
        score.pop(ind1)
        ind.clear()
    else:
        win.append(team[e])
        goal.pop(e)
        team.pop(e)
        score.pop(e)

    d = max(score)
    e = score.index(d)
    if (score.count(d) > 1):
        ind = []
        for i in range(len(score)):
            if score[i] == d:
                ind.append(i)
        max1 = -20
        for i in ind:
            if (goal[i] > max1):
                max1 = goal[i]
        ind1 = goal.index(max1)
        win.append(team[ind1])
        goal.pop(ind1)
        team.pop(ind1)
        score.pop(ind1)
    else:
        e = score.index(d)
        win.append(team[e])

    print(*win,sep=" ")
    t-=1
