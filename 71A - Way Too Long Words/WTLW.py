max = int(input())

tempStrings = list()

for i in range(max):
    tempStrings.append(input())

for word in tempStrings:
    if (len(word) <= 10):
        print(word)
    else:
        print(word[0] + str(len(word) - 2) + word[-1])