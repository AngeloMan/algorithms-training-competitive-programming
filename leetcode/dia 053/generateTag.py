class Solution:
    def generateTag(self, caption: str) -> str:
        s = caption.split(" ")
        r = "#"
        f = True 
        for i in s:
            if f:
                if i:
                    r += i.lower()
                    f = False
            else:
                r += i.capitalize()
        return r[0:100]