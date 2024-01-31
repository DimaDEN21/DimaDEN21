import random
def func():
    list1 = []
    list2 = []
    list3 = []
    list4 = []
    list1.append(random.randint(5,19))
    list2.append(random.randint(0, 14))
    list3.append(random.randint(-3, 5))
    list4.append(random.randint(-5,-1))
    print((sum(list1)/len(list1)),"average for 1st year\n",
          (sum(list2) / len(list2)),"average for 2nd year\n",
          (sum(list3) / len(list3)),"average value for the 3rd year\n",
          (sum(list4) / len(list4)),"average for 4th year\n",
          ((sum(list1)+sum(list2)+sum(list3)+sum(list4))/(len(list1)+len(list2)+len(list3)+len(list4))),
          "Average for all years")
func()