def sumUntilOneDigit(n):
    while n > 9:
        n = n // 10 + n % 10
    return n

if __name__ == '__main__':
    print(sumUntilOneDigit(1234))
    print(sumUntilOneDigit(9999))