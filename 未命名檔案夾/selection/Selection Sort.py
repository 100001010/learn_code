#選擇排序法 Selection Sort

data = [89, 34, 23, 78, 67, 100, 66, 29, 79, 55, 78, 88, 92, 96, 96, 23]

def SelectionSort(data):
    n = len(data)
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if data[j] < data[min_idx]:
                min_idx = j
        if min_idx != i:
            data[i], data[min_idx] = data[min_idx], data[i]
    return data

print(SelectionSort(data))



