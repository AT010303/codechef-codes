print("Enter the Number to produce an Exception :")
a=input
try:
    numerator=10
    denominator=0
    result=numerator/denominator
    print(result)
except:
    print("Error : Zero Devision Error")
