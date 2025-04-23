class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        a = len(numbers)
        if target > max(numbers):
            for i in range(a - 1):
                for j in range(i + 1, a):
                    if numbers[::-1][i] + numbers[::-1][j] == target:                     
                        return sorted([a - i,a - j])
            
        for i in range(a - 1):
            for j in range(i + 1, a):
                if numbers[i] + numbers[j] == target:
                    return [i + 1, j + 1]
