arr = [1,[2,[3,4]],5]

def flatten_list(arr):
    empty_list = []
    
    for i in arr:
        if isinstance(i, list):
            empty_list.extend(flatten_list(i))
        else:
            empty_list.append(i)
    return empty_list
        
print(flatten_list(arr))        
