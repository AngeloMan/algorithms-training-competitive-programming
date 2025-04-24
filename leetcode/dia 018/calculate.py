class Solution:
    def calculate(self, s: str) -> int:
        ops = {'/': lambda a, b : int(int(a)/int(b)), '*': lambda a, b : (int(a)*int(b))}
        def subcal(operation):
            cop = None
            a = ''
            b = ''
            for c in operation:
                if c in ops:
                    if cop:
                        a = str(ops[cop](int(a), int(b)))
                    else:
                        a = b
                    cop = c
                    b = ''
                else:
                    b += c
            if cop == None:
                return int(b)
            return ops[cop](a, b)

        par = [n.split('-') for n in s.split('+')]
        for i in range(len(par)):
            for j in range(len(par[i])):
                par[i][j] = subcal(par[i][j])
            par[i] = (2 * par[i][0]) - sum(par[i])
        
        return sum(par)