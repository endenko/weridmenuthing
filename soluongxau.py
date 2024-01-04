N = int(input("Nhập số lượng xâu: "))
strings = []
for i in range(N):
    s = input()
    strings.append(s)

count_repeat_strings = 0

for s in strings:
    for length in range(1, len(s) // 2 + 1):
        substring = s[:length]
        repeat = s.count(substring)

        if repeat >= 2:
            count_repeat_strings += 1
            break

print(count_repeat_strings)
