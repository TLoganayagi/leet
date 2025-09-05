class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        perms = itertools.permutations(nums)
        unique = [list(t) for t in set(perms)]  
        return unique