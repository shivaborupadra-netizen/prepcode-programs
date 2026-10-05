buy=int (input('enter a value:'))
discount=int(input('enter a value:'))
if(buy>=1000):
    print('eligible for discount')
else:
    print('no discount')
total=(buy/100)*discount
bill=buy-total
print(f'bill=buy-total')