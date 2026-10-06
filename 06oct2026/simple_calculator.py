num_1=int(input())
num_2=int(input())
operator=input()
if(operator=='+'):
    print('num_1+num_2')
elif(operator=='-'):
    print(num_1-num_2)
elif(operator=='*'):
    print(num_1*num_2)
elif(operator=='/'):
    print(num_1/num_2)
else:
    print('invalid operator')