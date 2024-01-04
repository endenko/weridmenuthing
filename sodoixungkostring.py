class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        original_x = x
        reversed_x = 0

        while x > 0:
            reversed_x = reversed_x * 10 + x % 10
            x //= 10

        return original_x == reversed_x
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
