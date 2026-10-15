age=int(input())
try:
 if age<0 :
    raise ValueError('age cannot be negative')
 print('valid age:',age)  

except ValueError as error:
    print('error')