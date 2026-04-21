class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def longest_consecutive(root):
    result = [0]
    def dfs(node, parent_val, length):
        if not node:
            return
        if node.val == parent_val + 1:
            length += 1
        else:
            length = 1
        result[0] = max(result[0], length)
        dfs(node.left, node.val, length)
        dfs(node.right, node.val, length)
    dfs(root, float('-inf'), 0)
    return result[0]

root = TreeNode(1)
root.right = TreeNode(3)
root.right.left = TreeNode(2)
root.right.right = TreeNode(4)
root.right.right.right = TreeNode(5)
print(longest_consecutive(root))