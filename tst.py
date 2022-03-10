import summy
from time import time
import math
def log(fun):
    def wrapper(*args):
        t = time()
        print(fun(*args))
        print("%.20f" % round(time() - t))
    return wrapper

@log
def c_squareroot(n):
    return summy.sqrt(n)

@log
def squareroot(n):
    return math.sqrt(n)

c_squareroot(4)
squareroot(4)

