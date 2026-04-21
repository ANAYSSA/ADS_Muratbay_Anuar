def quick_sort(nums, low, high):
    if low < high:
        pivot = nums[high]
        i = low - 1
        for j in range(low, high):
            if nums[j] <= pivot:
                i += 1
                nums[i], nums[j] = nums[j], nums[i]
        nums[i + 1], nums[high] = nums[high], nums[i + 1]
        pi = i + 1
        quick_sort(nums, low, pi - 1)
        quick_sort(nums, pi + 1, high)

nums = [3, 6, 8, 10, 1, 2, 1]
quick_sort(nums, 0, len(nums) - 1)
print(nums)