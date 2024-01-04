m,n = map(int, input("Nhập tổng số đầu và tổng số chân: ").split())
for x in range(m + 1):
    y = m - x
    if 2 * x + 4 * y == n:
        print(f"Số lượng gà: {x}, số lượng thỏ: {y}")
        break
else:
    print("-1")
