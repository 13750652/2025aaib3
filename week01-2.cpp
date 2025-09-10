#week01-2.py LeetCode 學習計畫 Python
#28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #字串長度
        N = len(needle) #字串長度
        #sadbutsad
        #sad i:0
        # sad i:1
        #....
        #      sad i:6
        for i in range(H-N+1): #長度9找長度3
            if haystack[i:i+N]==needle: #若兩個相同
            # 把字串，從i開始，取到 i+N結束共N個字
                return i #成功找到
        return -1 #沒有成功
