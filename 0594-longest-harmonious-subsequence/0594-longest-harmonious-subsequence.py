from collections import Counter

class Solution:
    def findLHS(self, nums: List[int]) -> int:
        freq = Counter(nums)
        longest = 0
        
        for x in freq:
            if x + 1 in freq:
                longest = max(longest, freq[x] + freq[x + 1])
        
        return longest
