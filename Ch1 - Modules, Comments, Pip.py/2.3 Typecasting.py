#Typecasting: a way to convert one data type to another data type.
a = 1111
print (type(a))
print(a + 4) 
# well 'a' is a string so we can not add 4 to it (but for me it did woek idk how-)
# therefore we need to convert a into an integer first and the stuff inside needs to be a integer for it to be converted into an integer.

a = int(a)
print (type(a))
print (a + 4)

#50 is a numeric literal
#"50" is a string literal
#strings, integers and floats can be converted into each other.'