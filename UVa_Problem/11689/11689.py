"""
Coded by Daniel H. Leung
Date : 2017-04-06 (YYYYMMDD)
"""
def processing(amount, crit):
    times, left = 0, 0
    while amount >= crit:
        left = int(amount / crit)
        times += left
        amount = amount % crit
        amount += left
    print(times)
num = input()
for i in range(int(num)):
    cur, grab, crit = input().split(' ')
    processing(int(cur) + int(grab), int(crit))
