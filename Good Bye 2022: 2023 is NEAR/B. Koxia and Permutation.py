import sys
import math

for _ in range(int(input())):
    n , k = map(int,input().split())
    l = []
    for i in range (n//2):
        l.append(n-i);l.append(i+1)
    if n % 2 == 0:print(*1)
    else:
        l.append((n//2)+1);print(*1)