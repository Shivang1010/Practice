''' 1 logic
x, y, z, n = int(input()), int(input()), int(input()), int(input())
print ([[a,b,c] for a in range(0,x+1) for b in range(0,y+1) for c in range(0,z+1) if a + b + c != n ])
'''


''' 2 logic
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
print([[i,j,k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if sum([i,j,k]) != n])
'''


''' 3 logic
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())


listijk = [] #an empty list to be filled as following
for i in range(x + 1): #it will output 0, and will only output 1 after the next conditions ('for j' and 'for k') are met.
    for j in range (y + 1): #it will output 0, and will only output 1 after the next condition ('for k') is met.
        for k in range (z + 1): #it will output 0 and then 1.
            if i + j + k != n: #before printing the result, it will exclude the output which 'i' + 'j' + 'k' is the same as 'n'.
                listijk.append([i,j,k])
print(listijk) #print the list properly filled

'''
