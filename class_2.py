class JP:
    def __init__(self, time):
        self.time = time
        print("Hello from constructor!!")
    def display(self):
        print("Hello from inside class method!!")
        return "Somthing!!"

obj = JP(10)
print(obj.time)
print(obj.display())
        