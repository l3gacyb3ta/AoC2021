lines = []

with open("input.txt") as file:
  lines = file.readlines()

increase = 0

for idx, value in enumerate(lines):
  last = int(lines[idx-1]) if idx > 0 else 99999999999999999999999999
  this = int(value)

  if this > last:
    increase += 1

print(increase)