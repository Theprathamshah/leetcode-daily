arr = [4,2,2,0,1,1]

def solution(arr):
    def moveZeros(arr):
        nonZeros = [i for i in arr if i!=0]
        zeros = len(arr) - len(nonZeros)
        return nonZeros + [0]*zeros
    for i in range(len(arr)-1):
        if arr[i] == arr[i+1]:
            arr[i] *= 2
            arr[i+1] = 0
    return moveZeros(arr)

print(solution(arr))        