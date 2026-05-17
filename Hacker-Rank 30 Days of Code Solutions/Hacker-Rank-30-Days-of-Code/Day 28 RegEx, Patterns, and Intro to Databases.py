#!/bin/python3

import re

if __name__ == '__main__':
    N = int(input().strip())
    names = []

    pattern = r'^[a-z]+@gmail\.com$'

    for _ in range(N):
        firstName, emailID = input().split()
        if re.match(pattern, emailID):
            names.append(firstName)

    for name in sorted(names):
        print(name)
