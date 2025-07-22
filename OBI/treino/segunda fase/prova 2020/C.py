d = int(input())
n = int(input())

nums = []

for i in range(n):
  nums.append(int(input()))
  
nums.sort()

result = min(nums[0] + (nums[1] - nums[0])/2,d - nums[-1] + (nums[-1] - nums[-2])/2)


for i in range(1, n - 1):
  result = min(result, (nums[i] - nums[i - 1])/2 + (nums[i + 1] - nums[i])/2)
  
print(f"{result:.2f}")