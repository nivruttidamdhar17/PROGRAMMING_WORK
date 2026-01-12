# write a program to creats a dictionary of hindi words with values as their english translation provide user with an option to look it up!

mydict={
    "pankha":"fan",
    "dabba":"box",
    "vastu":"items"
}

print("Options are ",mydict.keys())
a=input("Enter hindi word\n")
print("the meaning of your word is: ",mydict[a])


#below line will not thrown an error if the key is not present in the dictionary.
# print("the meaning of your word is: ",mydict.get(a))
