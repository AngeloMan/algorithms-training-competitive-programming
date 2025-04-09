class heap:
    def __init__(self, arr:list):
        self.arr = arr
    def siftup(self, i):
        parent = (i - 1)//2
        while i != 0 and self.arr[parent] > self.arr[i]:
            self.arr[i], self.arr[parent] = self.arr[parent], self.arr[i]
            i = parent
            parent = (i - 1)//2
    def sifdown(self, i):
        l = 2 * i + 1
        r = 2 * i + 2
        while (l < len(self.arr) and self.arr[i] > self.arr[l]) or (r < len(self.arr) and self.arr[i] > self.arr[r]):
            small, ni = self.arr[l], l
            try:
                a = small
                small = min(small, self.arr[r])
                if a != small:
                    ni = r
            except Exception:
                ...
            self.arr[i], self.arr[ni] = self.arr[ni], self.arr[i]
            i = ni
            l = 2 * i + 1
            r = 2 * i + 2
            
    def __repr__(self):
        return f'{self.arr}'
    
a = heap([1, 2, 3])
c = a
print(c)
