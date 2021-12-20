import math
import numpy as np
import matplotlib.pyplot as plot
from matplotlib import transforms
time = np.arange(0, 10, 0.1);
amplitude = np.sin(time)
deltaAn = [0]*len(time)
deltaAn[0] = 0.0
for i in range(1,len(amplitude)):
    deltaAn[i] = amplitude[i]-amplitude[i-1]
plot.title('График')
plot.xlabel('Амплитуда')
plot.ylabel('Delta-Амплитуда')
plot.grid(True, which='both')
plot.plot(amplitude,deltaAn)
plot.show()