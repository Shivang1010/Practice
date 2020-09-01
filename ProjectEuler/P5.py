import math

def lcm_two(a, b):
    return a * b // math.gcd(a, b)

def lcm_sequence(sequence):
    lcm = 1
    for i in sequence:
        lcm = lcm_two(lcm, i)
    return lcm

t = int(input())
for _ in range(t):
    n = int(input())
    print(lcm_sequence( [i for i in range(1, n+1)] ))
    
    
    '''input 
    1
    20
    
    output
    232792560'''
    
