a = [1,12, 13, 14 , 19 , 20]
b = [12, 56, 13, 28]

def getValuesAdding(inputList, sum):
    dictMap = {}
    for i in inputList:
        element1  = sum-i
        if element1 in dictMap:
            return True, element1, i
        else:
            dictMap[i] = 1
    return False, -1, -1   
    
print(getValuesAdding(a, 25))  
print(getValuesAdding(a, 23))  
