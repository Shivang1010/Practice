n = int(input())
a = sorted(map(int, input().split()), reverse=True)
print(a[a.count(a[0])])

'''
n = int(input())
arr = list(map(int, input().split()))
print(max([x for x in arr if x!=max(arr)]))
'''
