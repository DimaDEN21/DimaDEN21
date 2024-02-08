def func():
    list=[]
    list1=[]
    for i in range(12):
        print("Enter the average monthly temperature for the month", i+1)
        list.append(float(input()))
    for i in range(len(list)):
        if list[i] < 0:
            list1.append(i+1)

    print(list1,"Months where the temperature is below zero")
    print(max(list),"Maximum temperature per year, month=",list.index(max(list))+1)
    print(min(list), "Minimum temperature for the year, month=", list.index(min(list)) + 1)
    print(round(sum(list)/len(list),2),"Average temperature per year")
func()