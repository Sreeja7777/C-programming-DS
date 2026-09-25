# The operators in Python are used to perform operations on variables and values.
# Python divides the operators into the following groups:

#Arithmetic Operators, the operators used to perform arithmetic operations on variables. 
print ("The value of 3+4 is" , 3+4)
print ("The value of 3-4 is" , 3-4) 
print ("The value of 3*4 is" , 3*4)
print ("The value of 3/4 is" , 3/4) 

#Assignment Operators, the operators used to assign values to variables.
a = 20
a += 4
print(a)
a -= 4 
print(a)
a *= 4
print (a) 
a /= 4
print (a)

#Comparison Operators, the operators used to compare two values. it returns boolian
a = (8>5) 
print (a)
b = (29>56)
print (b)
c = (77==77) #cant use one equal cus its used to assign value.
print (c)
d = 74>=70
print (d)
e = 60>=70 
print (e)
f = 50 != 50 # != means not equal to
print (f) 

#Logical Operators, the operators used to combine conditional statements.
bool1 = True
bool2 = False
print ("The value of bool1 and bool2 is", (bool1 and bool2)) # and operator returns true if both are true
print ("The value of bool1 or bool2 is", (bool1 or bool2)) # or operator returns true if one is true
print ("The value of not bool2 is", (not bool2)) # not operator returns true if the value is false, switches the value
