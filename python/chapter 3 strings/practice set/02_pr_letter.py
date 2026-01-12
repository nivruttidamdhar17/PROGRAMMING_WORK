# Q2. write a ptogram to fill in a letter templete given below with name and date.

        # letter = '''Dear <|NAME|>,
        #                 You are Selected!
        #                 <|DATE|>'''

# programe:

letter='''Dear <|NAME|>
You are selected! \n I am happy to inform you that you are selected at Accenture information technology center.
Have a great day ahead!
thanks and regards!
Date: <|DATE|>
'''
name=input("Enter your name\n")
date=input("Enter Date\n")
letter = letter.replace("<|NAME|>",name)
letter = letter.replace("<|DATE|>",date)
print(letter)