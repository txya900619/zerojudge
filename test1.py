times = int(input())
for i in range(times):
    num = int(input())
    data = list(map(int, input().split()))
    big, tmp, pos = data[0], data[0], 0
    while pos<len(data) - 1:
        if tmp + data[pos + 1] <=0 :
            if data[pos + 1] > big: big = data[pos+1]
            tmp = data[pos + 1]
        else: tmp += data[pos + 1]
        pos += 1
        if tmp > big: big = tmp
    print(big)
