class A:
    def display1():
        print("hello A")

class B(A):
    def display2():
        print("hello B")

class C(B):
    def display3():
        print("hello C")


obj = C
obj.display3()
obj.display1()