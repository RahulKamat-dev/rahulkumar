from cs50 import get_int
def find(height):
    for rows in range(1, height + 1):
        space = height - rows
        while (space > 0):
            print(" ",end ="")
            space = space - 1
        for has in range(1, rows +1):
            print("#",end = "")
        print("")
while (True):
    height = get_int("Height:")
   # x = int(height)
    if (height >= 1) and (height <= 8):
        find(height)
        break
    else:
        continue