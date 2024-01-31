import random
def func():
    list=[]
    i=0
    while i<8:
        i+=1
        list.append(round((6.0-random.random()*3.2),2))
    print(list, " list\n",
                (sum(list)/len(list)),"Average time taken to cover a distance of 1500 meters, among 8 runners")
func()