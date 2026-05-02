p = 6
is_prime = True
for i in range(2, p):
    if i < 2: 
        is_prime =  False
        break
    if p % i == 0:
        is_prime = False
        break
print(is_prime)
