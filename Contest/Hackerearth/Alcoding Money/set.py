def powerset(s):
    x = len(s)
    masks = [1 << i for i in range(x)]
    for i in range(1 << x):
        yield [ss for mask, ss in zip(masks, s) if i & mask]

def intersection(lst1, lst2):
    return list(set(lst1) & set(lst2))

x,y = list(map(int,input().split()))
l = list(map(int,input().split()))
l.sort()
s=set(l)
d={}
for keys in s:
    d[keys] = 0;
for keys in s:
    for values in l:
        if keys==values:
            d[keys] += 1
#print(d)
#print(l)
#print(s)
#print(list(powerset(s)))

sl = list(powerset(s))
count=0

#for i in sl:
#    print(type(i))

for i in range(0,len(sl)-1):
    for j in range(i+1,len(sl)):
        #print([9,9] + sl[i])
        #print([9,9,9] + sl[j])
        #print([9,9,9,9] + intersection(sl[i],sl[j]))
        if len(intersection(sl[i],sl[j]))==y:
            z = sl[i] + sl[j]
            z.sort()
            #print([8,8,8,8,8] + z)
            if z==l:
                count += 1
print(count*2)
