
def selection(arr, n):
    for i in range(0,n):
        min=i
        for j in range(i+1, n):
            if(arr[min]>arr[j]):
                min=j
        arr[i],arr[min]=arr[min], arr[i]

list =[8, 3, 9, 34, 234, 4]
n=len(list)
selection(list, n)
print(list)






