n = int(input("Nhập kích thước của file (đơn vị byte): "))
clusters = (n + 4095) // 4096
size_in_kb = clusters * 4
print(f"Số lượng KB mà file chiếm trên đĩa trong hệ thống NTFS: {size_in_kb}")
