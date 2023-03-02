
import numpy as np
import matplotlib.pyplot as plt
from scipy import signal



N = 2 # Filter Order
cutoff_freq = 200
sample_freq = 2000
b, a = signal.iirfilter(N, cutoff_freq, btype="lowpass", analog=False, fs=sample_freq)
print("Numerator Coefficients (b):", b)
print("Denominator Coefficients (a):", a)

w, h = signal.freqz(b, a, sample_freq, fs=sample_freq)
fig = plt.figure()
ax = fig.add_subplot(1, 1, 1)
ax.semilogx(w, 20*np.log10(np.maximum(abs(h), 1e-5)))
ax.set_title("Digital IIR Filter Frequency Response")
ax.set_xlabel("Frequency [Hz]")
ax.set_ylabel("Amplitude [dB]")
ax.axis((10, 1000, -100, 10))
ax.grid(which="both", axis="both")
plt.savefig("iir_filter.png")
