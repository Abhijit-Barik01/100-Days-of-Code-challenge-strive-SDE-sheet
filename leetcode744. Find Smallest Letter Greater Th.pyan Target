class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        if len(s)!=len(goal):
            return False

        if s == goal:
            hash=[0]*26
            for x in s:
                hash[ord(x)-ord('a')]+=1
                if ( hash[ord(x)-ord('a')]==2):
                    return True
            return False
        firstindex = -1
        lastindex = -1
        for i in range(len(s)):
            if s[i]!= goal[i]:
                if firstindex == -1:
                    firstindex = i
                elif lastindex == -1:
                    lastindex = i
                else:
                    return False
        if lastindex == -1:
            return False
        return s[firstindex]== goal[lastindex] and  s[lastindex] == goal[firstindex]
                

            

