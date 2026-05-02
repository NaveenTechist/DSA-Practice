arr = [1,2,2,3,1] 
new_arr = [] 
duplicate = []
for i in arr:
    if i in new_arr:
        duplicate.append(i)
    else:
        new_arr.append(i)
print(duplicate)   
print(new_arr)
