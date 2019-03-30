def factor(n):
    if n < 2:
        return 1
    else:
        return factor(n-1)*n

print(factor(52))