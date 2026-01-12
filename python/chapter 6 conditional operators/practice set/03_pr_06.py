# A spam comment is defined as a text containing following keyword
#"Make a lot of money","buy now","subscribe this","clic this".write a programe to detect these spams

comment=input("Enter text \n")
spam = False
if("Make a lot of money"):
    spam=True
elif("buy now"):
    spam=True
if("subscribe this"):
    spam=True
if("clic this"):
    spam=True
else:
    spam=False

if(spam):
    print("this text is spam")
else:
    print("This text is not spam")
