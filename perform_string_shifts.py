class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        final = 0
        for sft in shift:
            if (sft[0] == 0):
                final -= sft[1]
            else:
                final += sft[1]
        
        return s[-final % len(s): ] + s[:-final % len(s)]
