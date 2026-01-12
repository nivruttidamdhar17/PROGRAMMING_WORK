# write a program to accept marks of 6 students and display them in a sorted manner

m1= int(input("Enter marks of the student Number 1: \n"))
m2= int(input("Enter marks of the student Number 2: \n"))
m3= int(input("Enter marks of the student Number 3: \n"))
m4= int(input("Enter marks of the student Number 4: \n"))
m5= int(input("Enter marks of the student Number 5: \n"))
m6= int(input("Enter marks of the student Number 6: \n"))

mylist=[m1, m2, m3, m4, m5, m6]
mylist.sort()
print(mylist)