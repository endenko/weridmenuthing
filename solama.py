def romanToInt(s: str) -> int:
    roman_values = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    total = 0
    i = 0

    while i < len(s):
        # If this is a subtraction case
        if i + 1 < len(s) and roman_values[s[i]] < roman_values[s[i + 1]]:
            total += roman_values[s[i + 1]] - roman_values[s[i]]
            i += 2
        else:
            # Regular addition case
            total += roman_values[s[i]]
            i += 1

    return total

# Ask the user for input
user_input = input("Please enter a Roman numeral: ")
# Convert the Roman numeral to an integer
result = romanToInt(user_input)
# Print the result
print("The integer value is:", result)
