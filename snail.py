a, b, v = map(int, input().split())
distance_climbed_per_day = a - b  
days = (v - b - 1) // distance_climbed_per_day + 1 
print(days)
