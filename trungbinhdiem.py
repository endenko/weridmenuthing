a = float(input("mời bạn nhập số điểm toán : "))
b = float(input("mời bạn nhập số điểm lý : "))
c = float(input("mời bạn nhập số điểm hóa : "))
d = float(input("mời bạn nhập số điểm văn : "))
e = float(input("mời bạn nhập số điểm anh : "))
f = float(input("mời bạn nhập số điểm sử : "))
g = float(input("mời bạn nhập số điểm địa : "))
h = float(input("mời bạn nhập số điểm GDCD : "))

if 0 <= (a and b and c and d and e and f and g and h) <= 10:
    diemtb = (a + b + c + d + e + f + g + h) / 8
    if diemtb >= 8.0:
        if a >= 8.0 or d >= 8.0:
            print(f"học sinh giỏi voi điểm số : {diemtb}")
        else:
            print(f"học sinh khá voi điểm số : {diemtb}")
    elif diemtb >= 6.5:
        if a >= 6.5 or d >= 6.5:
            print(f"học sinh khá voi điểm số : {diemtb}")
        else:
            print(f"học sinh trung bình voi điểm số : {diemtb}")
    elif diemtb >= 5.0:
        if a >= 5.0 or d >= 5.0:
            print(f"học sinh trung bình voi điểm số : {diemtb}")
        else:
            print(f"học sinh yếu voi điểm số : {diemtb}")
    else:
        print(f"học sinh yếu voi điểm số : {diemtb}")
