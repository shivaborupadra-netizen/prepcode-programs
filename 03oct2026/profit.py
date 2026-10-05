cost=int(input('enter a value:'))
sell=int(input('enter a value:'))
quantity=int(input('enter a value:'))
storage=100
profit=((sell-cost)*quantity)-storage
print(f'total profit={profit}')