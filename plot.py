#values of x wiil be 750, 500, 350, 200, 100
#values of y will be 20, 40 60, 80, 100
#now plot them

#label x and y axis as quanity and price
#label the graph as price vs quantity
#save the graph as price_vs_quantity.png

#now plot them

import matplotlib.pyplot as plt

x = [750, 500, 350, 200, 100] #quantity
y = [20, 40, 60, 80, 100] #price
z = [100, 200, 350, 530, 700] #supply

plt.plot(x, y, label = "demand")
plt.plot(z, y, label = "supply")
plt.xlabel("quantity")
plt.ylabel("price")
plt.title("price vs quantity")
#higtight the point where demand and supply intersect
plt.scatter(350, 60, color = "red", marker = "o")

plt.legend()
plt.savefig("price_vs_quantity.png")
plt.show()






