import random
def func():
    a=[]
    for i in range(10):
        a.append(round((10.0-random.random()5.0),2))
    print(a)
    max = a[0]
    min = a[0]
    for i in range(len(a)):
        #0,1,2,3,4,5,6,7,8,9
        #a[i] = a[0] , a[i] = a[1]
        #max ,max() , .apppend()
        #a[0] = 6.76 , max = a[0] = 6.76
        if a[i] > max:
            max = a[i]
            # 6.76, 5.1, 7.38, 9.6, 5.31, 8.62, 8.5, 6.12, 8.12, 7.41
            # Cycle 0: if 6.76 > 6.76: ... ,Cycle 1: if 5.1> 6.76: ..., Cycle 2: if 7.38 > 6.76: max{6.76} = a[2]{7.38} ==> max{7.38}
        elif a[i] < min:
            min = a[i]

    print("Min", min)
    print("Max", max)
    print("Difference", round(max-min,2))
func()









def func1():
    a=[]
    for i in range(10):
        a.append(round((10.0-random.random()5.0),2))
    print(a)
    print("Min", min(a))
    print("Max", max(a))
    print("Difference", round(max(a) - min(a), 2))

