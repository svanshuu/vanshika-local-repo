n=70
i=65

while i<n:
    j=65
    while j<n-i-1:
        print(" ",end="")
        j=j+1
    j=65
    while j<2*i+1:
        print(chr(j),end="")
        j=j+1
    print()
    i=i+1
i=65
while i<n-1:
    j=65
    while j<i+1:
        print(' ',end=" ")
        j=j+1
    j=65
    while j< 2*(n - i - 1) - 1+65:
           print(chr(j),end="")
           j=j+1
    print()
    i=i+1
        