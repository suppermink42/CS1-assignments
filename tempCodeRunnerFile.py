from os import system


dataSet = [12]
print("Enter numbers")
for x in 12:
    dataSet[x] = input("Enter Value")
   
    while dataSet[x] < 0:
       print("No negative values")
       dataSet[x] = input("Enter Value again")

    smallest = dataSet[x]
    if smallest > dataSet[x]:
        smallest = dataSet[x]

    
    largest = dataSet[x]
    if largest < dataSet[x]:
        largest = dataSet[x]
    
    total = total + dataSet[x]

average = total / 12

print(total)
print(average)
print(smallest)
print(largest)




