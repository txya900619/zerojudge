while True:
    try:
        num = int(input())
        str_pow = "^"
        num2 = 2
        count = 0
        ans =""
        count_2= 0
        while num!=1:
            if num%num2==0:
                count+=1;
                num=num/num2;
                if num%num2==0:
                    continue
                else:
                    count_2+= 1;
                    if(count_2>1):
                        ans += " * "
                    if(count>=2):   
                        ans += str(num2)
                        ans += "^";
                        ans += str(count)
                    else:
                        ans +=str(num2)
                    count = 0
               
            else:
                num2+=1
        print(ans)
        print("\n")
    except:
        break#aaaaaa