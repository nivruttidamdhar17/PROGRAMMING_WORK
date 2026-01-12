# write a program which find out whether a given name is present in a list or not.

names=["harry","shubham","max","monu","tejas","om"]
name=input("Enter the name to check\n")

if name in names:
    print("name you entered is present in list")
else:
    print("the name you entered is not present in the list")