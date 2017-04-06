"""
Coded by Daniel H. Leung
Date : 2017-04-06 (YYYYMMDD)
"""
def process(n):
    if n >= 1:
        return n**2 + process(n - 1)
    else:
        return 0
while(True):
    n = eval(input())
    if n == 0:
        break
    else:
        print(process(n))
