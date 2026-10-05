food_price=int(input('eneter price:'))
quantity=int(input('enter a value:'))
price=food_price*quantity
delivary_charge=int(input('enter value:'))
discount=int(input('enter a value:'))
discount_percentage=(price/100)*discount
final_bill=(price+delivary_charge)-discount_percentage
print(final_bill)