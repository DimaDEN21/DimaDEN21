import random
def func():
    dict={"Kyiv":random.randint(500000,2500000),"Bila Tserkva":random.randint(100000,220000),
          "Brovary":random.randint(80000,150000),"Boryspil":random.randint(45000,80000),
          "Fastov":random.randint(40000,50000)}
    print(max(dict.values()),"Highest violence in the city\n",min(dict.values()),"Least violence in the city")
func()