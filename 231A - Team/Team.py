max = int(input())
canSolve = 0

for i in range(max):
    count = 0
    line = input()

    for c in line:
        if (c == '1'):
            count += 1
    if (count >= 2):
        canSolve += 1

print(canSolve)