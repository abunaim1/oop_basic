from abc import ABC, abstractmethod

class Doctor(ABC):
    @abstractmethod
    def MBBS():
        print("Hello, Patient !!")

class Patient(Doctor):
    def __init__(self, condition):
        self.condition = condition

    def MBBS(self):
        print("I am Dr. Agash under!")

patient_1 = Patient('Cool')
patient_1.MBBS()

