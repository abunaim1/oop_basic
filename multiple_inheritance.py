class One:
    def __init__(self) -> None:
        print("this is one")
class Two:
    def __init__(self) -> None:
        print("this is two")
class Multi(One, Two):
    def __init__(self) -> None:
        # super().__init__() #method resolution order (MRO) 
        Two.__init__(self)
        One.__init__(self)
        

obj = Multi()