class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        brackets = {')': '(', '}': '{', ']': '['}
        for char in s:
            if char in brackets.values():
                stack.append(char)
            elif char in brackets.keys():
                if not stack or stack.pop() != brackets[char]:
                    return False  
            else:
                return False  
        return not stack

input_string = input("nhap dau ngoac hop le :  ")

solution = Solution()

if solution.isValid(input_string):
    print("hop le")
else:
    print("khong hop le")
