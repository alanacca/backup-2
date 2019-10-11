def selectionSort(array):
    for i in range(len(array)):
        smallest = i
        for j in range(i, len(array)):
            if array[smallest] > array[j]:
                smallest = j
        array[i], array[smallest] = array[smallest], array[i]
    return array