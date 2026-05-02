a = [1,2,2,3,1] 
d = {}
for i in a:
    d[i] = d.get(i, 0) +1
print(d)
