while True:
    try:
        array_num = int(input())
        numlist = {}
        for index in range(array_num):
            numlist[index] =list(map(int,input().split()))
        

        for key,value in numlist.items():
            if value[2]/value[1]==value[3]/value[2]:
                value.append(value[3]//value[2]*value[3])
            if value[2]-value[1]==value[3]-value[2] and value[2]-value[1]!=0:
                value.append(value[3]-value[2]+value[3])
    
        for key,value in numlist.items():
            for index2 in value:
                print(index2,end=' ')
            print("\n")
            
    except:
        break