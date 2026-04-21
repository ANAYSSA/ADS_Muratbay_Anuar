def first_unique_char(s):
    count = {}
    for char in s:
        count[char] = count.get(char, 0) + 1
    for i, char in enumerate(s):
        if count[char] == 1:
            return i
    return -1

s = "leetcode"
print(first_unique_char(s))

s = "loveleetcode"
print(first_unique_char(s))