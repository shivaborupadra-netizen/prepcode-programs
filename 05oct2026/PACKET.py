packets=int(input('enter a number'))
boxes=int(input('enter a number'))
box_capacity=int(input('enter a number'))
packed_packets=box_capacity*boxes
left_over_packets=packets-packed_packets
print('packets packed:',packed_packets)
print('packets left:',left_over_packets)