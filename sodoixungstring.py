class Solution:
    def isPalindrome(self, x: int) -> bool:
        str_x = str(x)
        return str_x == str_x[::-1]
try:
    num = int(input("Nhập một số nguyên: "))
    solution = Solution()
    result = solution.isPalindrome(num)
    if result:
        print(f"{num} là số đối xứng.")
    else:
        print(f"{num} không là số đối xứng.")
except ValueError:
    print("Vui lòng nhập một số nguyên hợp lệ.")