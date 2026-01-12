mydict={
    "fast":"in a quick Manner",
    "nivrutti":"a coder",
    "marks":[1,4,9],
    "anotherdict":{'nivrutti':'player'},
    1:2
}

print(list(mydict.keys())) #prints the keys of the dictionary
print(mydict.values()) #prints the values of the dictionary
print(mydict.items()) #prints the (key,value) for all contents of the dictionary.
print(mydict)
updatedict={
    "lovish":"friend",
    "omkar":"friend",
    "nivrutti":"singer"
}
mydict.update(updatedict) # update the dictionary by adding key pairs from updatedict
print(mydict)


print(mydict.get("nivrutti")) #prints value associated with key "nivrutti".
print(mydict["nivrutti"])  #prints value associated with key "nivrutti".

#The difference between .get and [] syntax in dictionary.
print(mydict.get("nivrutti2")) #returns None as nivrutti2 is not present in the dictionary.
print(mydict["nivrutti2"]) #throws an error as nivrutti2 is not present in dictonary