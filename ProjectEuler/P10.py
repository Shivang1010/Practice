import math

t=int(input())

def nprime():
    lim=2000001
    sieve = [True] * lim
    for i in range(3,int(math.sqrt(lim))+1,2):
        if sieve[i]:
            for j in range(i**2,lim,i):
                sieve[j]=False
    primes=[2]+[i for i in range(3,lim,2) if sieve[i]]
    return primes

def sumprimes(primes):
    out=[]
    sumy=0
    j=0
    for i in range(2000001):
        if primes[j]<=i:
            sumy+=primes[j]
            if j+1<len(primes):
                j+=1
        out.append(sumy)
    return out

primes=nprime()
sums=sumprimes(primes)
for k in range(t):
    n=int(input())
    print(sums[n])
