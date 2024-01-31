def programm():
    list=[0,1,2,3,4,5,6,7,8,9,10]
    print(len(list))
    list1=[]
    list2=[]
    for i in range(len(list)):
        if list.index(i) % 2 == 0:
            #list.index(value)
            list1.append(i)
        else:
            list2.append(i)
    print(list1, list2)
    print(sum(list1), "Sum of a list of even numbers\n",
          len(list2), "Length of a list of odd numbers")
programm()