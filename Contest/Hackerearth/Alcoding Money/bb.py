x=int(input())
for i in range(x):
    y=int(input())
    z=input()
    b=[]
    a=[]
    d=[]
    for i in range(y):
        if z[i]=='b':
            b.append(i)
        if z[i]=='a':
            a.append(i)
        if z[i]=='d':
            d.append(i)
    #print(b,a,d)
    bad=0
    for i in b:
        index=0
        k = [x for x in a if x>i]
        if k==[]:
            break
        l = [x for x in d if x>k[0]]
        if l==[]:
            break
        #print(i,k,l)
        a.remove(k[0])
        d.remove(l[0])
        bad += 1
        index += 1
        #print(b,a,d)
    print(y-bad*3)
