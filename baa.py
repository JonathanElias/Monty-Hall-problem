import random
import time

j = 0
runs = 1000000
stime = time.time()
for i in range(runs):
    car = random.randint(0, 2)
    away = car
    select = random.randint(0, 2)

    if car == select:
        while away == car:
            away = random.randint(0, 2)
            select = 3 - (select + away)

    else:
        away = 3 - (car + select)
        select = 3 - (select + away)

    if select == car:
        j += 1

print(time.time() - stime)
print(j/runs)
