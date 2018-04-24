import numpy as np 
import matplotlib.pyplot as plt
data = np.loadtxt("data.txt")
x = data[:,2]
t = data[:,1]
u = data[:,0]
plt.plot(x, u)
plt.plot(t, u)
plt.savefig("grafica")
