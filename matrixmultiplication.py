#marix multiplication

import numpy as np
#now insert a 1 by 4 matrix
a = np.array([[0.5,0.5, 0,0]])
#now instert a 4 by 4 matrix
b = np.array([[0.3, 0.4,0.3,0.0],[0.5,0.4, 0, 0.1],[0,0.2,0.7,0.1],[0.4,0,0.3,0.3]])
#now multiply the two matrices
c = np.dot(a,b)
d = np.dot(c,b)
print(d)