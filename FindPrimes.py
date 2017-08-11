#!/usr/bin/env python3

def main():
    for x in primes():
        if x > 1000: break
        print(x)

def isPrime(i):
    if i == 1: return False
    else:
        for x in range(2, i):
            if i % x == 0: return False
        return True

def primes(x = 1):
    while(True):
        if isPrime(x):
            yield x
        x += 1

if __name__ == "__main__": main()
