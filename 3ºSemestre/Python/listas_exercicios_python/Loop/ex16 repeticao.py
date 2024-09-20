x = 1
x1 = 0
print(x)
while True:
    res = x+x1
    if res > 500:
        break
    x1 = x
    x = res
    print(res)
