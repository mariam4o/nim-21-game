while True:
    x=21
    while x>0:
        y=int(input("enter a number : "))
        if y>3 :
            print ("invalid number ")
            continue
                
        x=x-y
        print(x)
        z=int(input("enter a number 2 : "))
        if z>3 :
            print ("sorry try another one ")
            m=int(input("enter a number 2 : "))
            x=x-m
        else:
                 
            x=x-z
        
        if x>0:
            print (x)
        else :
            print("you are a loser ")
