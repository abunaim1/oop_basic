class Bank:
    def __init__(self, name, initial_deposite) -> None:
        self.__balance = initial_deposite
        self.name = name
    def deposite(self, new_balance):
        self.__balance += new_balance
    def getBalane(self):
        return self.__balance
    
rufMood = Bank('Rufmoon', 40000)
balance = rufMood.getBalane()
rufMood.deposite(10000)
print(rufMood.getBalane())
print(rufMood._Bank__balance)