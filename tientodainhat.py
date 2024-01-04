from typing import List

def longestCommonPrefix(v: List[str]) -> str:
    ans = ""
    v = sorted(v)
    first = v[0]
    last = v[-1]
    for i in range(min(len(first), len(last))):
        if first[i] != last[i]:
            return ans
        ans += first[i]
    return ans

user_input = input("hay thu nhap cac chuoi cach nhau boi khoang trang: ")
input_list = user_input.split()
result = longestCommonPrefix(input_list)
print("tien to dai nhat : ", result)
