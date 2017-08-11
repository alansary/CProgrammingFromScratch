#!/usr/bin/env python3
def main():
    for x in range(1000):
        print("Fibonacci %4d: %50d" % (x, fib(x)))
def fib(x, d = {}):
    if x in d:
        return d[x]
    else:
        if x == 0:
            d[x] = 0
            return 0
        elif x == 1:
            d[x] = 1
            return 1
        else:
            v = fib(x-1) + fib(x-2)
            d[x] = v
            return v

if __name__ == "__main__": main()
