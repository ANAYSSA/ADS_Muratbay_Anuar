def heap_sort(nums):
    n = len(nums)
    for i in range(n // 2 - 1, -1, -1):
        heapify(nums, n, i)
    for i in range(n - 1, 0, -1):
        nums[0], nums[i] = nums[i], nums[0]
        heapify(nums, i, 0)

def heapify(nums, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2
    if left < n and nums[left] > nums[largest]:
        largest = left
    if right < n and nums[right] > nums[largest]:
        largest = right
    if largest != i:
        nums[i], nums[largest] = nums[largest], nums[i]
        heapify(nums, n, largest)

nums = [3, 6, 8, 10, 1, 2, 1]
heap_sort(nums)
print(nums)