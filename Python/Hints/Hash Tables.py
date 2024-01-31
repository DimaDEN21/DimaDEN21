hash_set = set()
hash_set.add("Dima")
hash_set.add("Roma")
hash_set.add("Толя")

age = {}
age["Dima"] = 23
age["Roma"]= 19
age["Толя"]= 34

ans = ""
ans = input("Enter name:")
if ans in hash_set:
    print(age[ans])
    hash_set.remove(ans)
else:
    print("(╯‵□′)╯┻")
