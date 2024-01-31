def func():
    list=[]
    for i in range(int(input("Number of results in the list"))):
        a=float(input())
        list.append(round(a))
    print(list)

func()