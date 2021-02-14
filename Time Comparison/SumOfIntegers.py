import time
def printSum():
    s = 0
    for i in range(0,1000000):
        s += i
    print(s)

start = time.perf_counter_ns()
printSum()
stop = time.perf_counter_ns()
t = (stop - start) / 1000
print("Time taken: ", t)
