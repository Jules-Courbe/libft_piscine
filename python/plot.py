import matplotlib.pyplot as plt
import numpy as np
import matplotlib
matplotlib.use("TkAgg")

x = np.linspace(0, 3, 10) # 10 valeurs entre 0 et 3
y = np.linspace(0, 2, 10)

plt.figure(figsize=(12, 8))
plt.plot(x, y)
plt.title('Title')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend('Legend')
plt.show()