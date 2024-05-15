class Phitron:
    def __init__(self, name, id):
        self.name = name
        self.id = id
        print("Im in super class", self.name, self.id)
    
    # def enrolled(self):
    #     print(self.name, self.id)

class Student(Phitron):
    def __init__(self, mobile, name, id):
        self.mobile = mobile
        print("I am in subclass",self.mobile)
        super().__init__(name, id)

obj = Student(234, "Naim", '1')
# obj.enrolled()
