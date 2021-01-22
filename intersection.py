a= [ 1,2,4,5 ]
b = [3, 5, 2, 1]

dict={}
def getIntersection(list1, list2):
    for ele in list1:
        if ele in dict.keys():
            dict[ele] =dict[ele]+1
        else:
            dict[ele] = 0
            
    for ele in list2:
        if ele in dict.keys():
            dict[ele] =dict[ele]+1
        else:
            dict[ele] = 0
    
    print(dict)        
    print("Intersection:")
    Intersection = []
    for key, val in dict.items():
        if val == 1:
            Intersection.append(key)
            
    print(Intersection)        
   
getIntersection(a,b)  