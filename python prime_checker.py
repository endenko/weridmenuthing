def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

num = 5 
if is_prime(num):
    print(f"{num} là số nguyên tố\n"*10 )
else:
    print(f"{num} không phải là số nguyên tố")
