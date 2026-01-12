greeting="Good Morning, "
name="Nivrutti"
print(type(name))

# concatenating two strings
c=greeting+name
print(c)

print(name[5])
print(name[3])
print(name[1])

# name[3]="d" ---> we can not change character of string


# slicing
print(name[0:3])
print(name[:4])  #-->is same as name[0:4]
print(name[0:])  #-->is same as name[0:7]


d=name[1::3]
print(d)

name="amazing"
d=name[1:6:2]
print(d)
