#  creating an empty set.
b=set()
print(type(b))


#  Adding values to an empty set.
b.add(4)
b.add(4)
b.add(5)
b.add(5) # adding a value repedatively does not change a set.
# b.add([4, 5, 6])   ---->we cant add list to sets.
b.add((4, 5, 6))    #-----> we can add tuple to the sets.
# b.add({4:5}) # cannot add list or dictionary to sets.

print(b)


# Length of the set.
print(len(b))  #prints the length of this set.


# Remove element from set.
b.remove(5)
# b.remove(15) # throws an error while trying to remove 15 which is not present in the set.
print(b)


# poping.  :
print(b.pop())
print(b)