def bubble(arr, n):
    for i in range(0, n):
        for j in range(0, n-i-1):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1]=arr[j+1], arr[j]



list =[8, 3, 9, 34, 234, 4]
n=len(list)
bubble(list, n)
print(list)

