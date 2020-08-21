import math

num_array =list()
globals()['num'] = int(input('How many element do you want to enter:'))
print ('Enter the number of array: ')
for i in range(int(num)):
    n=input("num: ")
    num_array.append(int(n))


x=int(input('target: '))


start=0
end= (int(num)-1)
middle=math.floor((int(num)-1)/2)

j=0

while(1):
    if num_array[int(middle)]>int(x):
        end=int(middle)
        middle=math.floor((int(start)+int(end))/2)
        j+=1
    elif num_array[int(middle)]<int(x):
        start=int(middle)
        middle=math.floor((int(start)+int(end))/2)
        j+=1
    else:
        print("found at",middle+1)
        break
