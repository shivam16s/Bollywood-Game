

from ast import Continue
from asyncio.windows_events import NULL
from operator import truediv
import random


w = "JOKER KI DUKAN"
i=0
n = len(w)
arr = []
for i in range (0,n):
    if w[i]==" ":
        arr.append(w[i])
        print( w[i], end= " ")
    
    elif bool(random.getrandbits(1)):
        arr.append("_")
        print("_",end =" ")

    # elif bool(random.getrandbits(1)):
    #     print("_",end =" ")
    
    else:
        arr.append(w[i])
        print(w[i], end =" ")

    i=i+1,


    # initialize an empty string
    arr1 = "" 
    
    # traverse in the string  
    for ele in arr: 
        arr1 += ele  

l2=len(arr1)
    


def bolly(s,i):
    


    if s==w[i]:
        # print("Congratulation!!!!\n You have guess it correct ")
        arr1[i]=w[i]
        print("\n\n",arr)


        return True

    else:
        return False



ac = 0
        
def inpt(i):
    s= input("\n\n\nEnter the Movie Name in Capital: ")[0]
    for ac in range (0,7):
        bolly(s,i)
        s= input("\nEnter the Movie Name in Capital Again: ")[0]
    
while ac <=7:
    for i in range(0,l2):
            if arr1[i]=="_":
                inpt(i)
                break
            else:
                continue
