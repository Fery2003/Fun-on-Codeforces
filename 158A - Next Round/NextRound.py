n, k = input().split()
temp = input().split()

count = 0

for i in range(int(n)):
    if (int(temp[i]) >= int(temp[int(k) - 1])) and (int(temp[i]) != 0):
        count += 1

print(count)
