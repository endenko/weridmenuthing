a = int(input("Mời bạn nhập giây: "))
b = int(input("Mời bạn nhập phút: "))
c = int(input("Mời bạn nhập giờ: "))

if 0 <= a <= 59 and 0 <= b <= 59 and 0 <= c <= 23:
    a += 1
    if a == 60:
        a = 0
        b += 1
        if b == 60:
            b = 0
            c += 1
            if c == 24:
                c = 0
    print(f"Thời gian hiện tại là: {c:02d}:{b:02d}:{a:02d}")
else:
    print("Thời gian bạn nhập không hợp lệ.")
