import math

def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False

    limit = int(math.sqrt(n)) + 1
    for i in range(3, limit, 2):
        if n % i == 0:
            return False
    return True


t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    if is_prime(n):
        print("Prime")
    else:
        print("Not prime")
