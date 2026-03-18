class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        ans1=""
        ans2=""
        stack=[]
        for i in s:
            if len(stack)==0 and i=='#':
                continue
            if len(stack)>0 and i=='#':
                stack.pop()
            else:
                stack.append(i)
        while len(stack)>0:
            ans1+=stack[-1]
            stack.pop()
        
        stack=[]
        for i in t:
            if len(stack)>0 and i=='#':
                stack.pop()
            else:
                if i=='#':
                    continue
                else:
                    stack.append(i)
        while len(stack)>0:
            ans2+=stack[-1]
            stack.pop()
        print(ans1,ans2)
        return ans1==ans2

