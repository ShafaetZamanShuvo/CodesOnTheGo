def isBinary(str):
    for i in range(len(str)):
        if str[i] != '0' and str[i] != '1':
            return False
    return True

if __name__ == "__main__":
    print(isBinary("101"))