def calculator():
    print " List of the fuctions  : "
    print " 1. Add "
    print " 2. Sub "
    print " 3. Mul "
    print " 4. Div "
    opt=input(" Enter your number => ")
    if opt==01:
        a=input(" Enter your first number : ")
        b=input(" Enter your second number: ")
        c=a+b
        print c
    elif opt==02:
        a=input(" Enter your first number : ")
        b=input(" Enter your second number: ")
        c=a-b
        print c
    elif opt==03:
        a=input(" Enter your first number : ")
        b=input(" Enter your second number: ")
        c=a*b
        print c
    elif opt==04:
        a=input(" Enter your first number : ")
        b=input(" Enter your second number: ")
        c=a/b
        print c
    else :
        print " wrong command : "
        calculator()
calculator()
