arr = [2,7,11,15] 
target = 9
di = {}
for i, num in enumerate(arr) :
     if(target - num in di):
         print([di[target-num], i])
     di[num] = i
