import numpy as np

z = np.zeros(10)

print(z)

a = np.eye(3)
print(a)

np.random.seed(42)

a = np.random.random_sample((2, 2, 2))
print(a)