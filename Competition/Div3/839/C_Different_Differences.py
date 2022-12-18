from typing import List

def create_array(n: int, k: int) -> List[int]:
    result = []
    current = 1
    used_elements = set()
    for i in range(1, k+1):
        increment = min(n - current, k - i + 1)
        current += increment
        result.append(current)
        used_elements.add(current)
    return result

result = create_array(5, 9)
print(result)  # Output: [1, 3, 6, 8, 9]
