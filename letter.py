Q = input("Nhập xâu mã hóa Q: ")
k = int(input("Nhập khóa k: "))

Sb = ""
Se = ""

for i in range(len(Q)):
    if i < k:
        Sb += Q[i]
    else:
        Se += Q[i]
Sb = Sb[::-1]
Se = Se[::-1]
S = Sb + Se

print("Xâu gốc S là:", S)
