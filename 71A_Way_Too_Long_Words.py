a = int(input())
b = []
for i in range(a):
    b.append(input())
for i in b:
    if len(i) >10:
        print(f"{i[0]}{len(i)-2}{i[-1]}")
    else:
        print(i)