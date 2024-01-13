#!/usr/bin/python3

l_palindrome = 0

for i in range (100, 1000):
    for j in range(100, 1000):
        mul = i * j
        if str(mul) == str(mul)[::-1] and mul > l_palindrome:
            l_palindrome = mul

with open("102-result") as file:
    file.write(str(l_palindrome))
