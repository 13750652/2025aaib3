#week01-2.py LeetCode �ǲ߭p�e Python
#28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�����
        N = len(needle) #�r�����
        #sadbutsad
        #sad i:0
        # sad i:1
        #....
        #      sad i:6
        for i in range(H-N+1): #����9�����3
            if haystack[i:i+N]==needle: #�Y��ӬۦP
            # ��r��A�qi�}�l�A���� i+N�����@N�Ӧr
                return i #���\���
        return -1 #�S�����\
