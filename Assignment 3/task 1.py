def two_sum(nums, target):
    seen = {}
    for i, num in enumerate(nums):
        complement = target - num
        if complement in seen:
            return [seen[complement], i]
        seen[num] = i


numbers = [2, 7, 11, 15]
targett = 9
print(two_sum(numbers, targett))