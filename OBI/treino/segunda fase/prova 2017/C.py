from array import array

def main():
    def solve(nums, x):
      t = 1
      ck = False
      for n in nums:
        if not ck and x < n:
          t += 1
        ck = x < n
      return t

    n = int(input())

    nums = list(map(int, input().split()))
    nums = array("i", nums)
    stn = sorted(set(nums))
    stn = array("i", stn)
    m = 0
    for i in stn:
      m = max(m, solve(nums, i))
  
    print(m)

main()

