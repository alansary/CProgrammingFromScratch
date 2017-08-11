#!/usr/bin/env python3

# If (m > n), then GCD(m, n) = GCD(n, m%n) "Euclid's Algorithm"

def main():
    print(GCD(43, 13, []))
    print(GCD(96, 28, []))

def GCD(m, n, l):
    if (n > m): # Swapping the values if n > m (m is always > n)
        m, n = n, m
    while (m % n): # while (m % n != 0)
        if not m % n == 0:
            val = m % n;
            # Wrong cod is:
            # n = val
            # m = n
            # Python style of solving the problem:
            m, n = n, val
            # Note that: n, m = val, n
    return val

if __name__ == "__main__": main()
