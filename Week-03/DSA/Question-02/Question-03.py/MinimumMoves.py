for m in range(int(input())):
    a,b=map(int,input().split())
    c=b-a
    if(a<b):
        if(c%2==0):
            print(c//2)
        else:
            result=c//2 
            res=result+2
            print(res)
    else:
        print(a-b)