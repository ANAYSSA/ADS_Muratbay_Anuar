def is_happy(n):
    seen = set()
    while n != 1:
        n = sum(int(d) ** 2 for d in str(n))
        if n in seen:
            return False
        seen.add(n)
    return True

n = 19
print(is_happy(n))