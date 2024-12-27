

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def personDetail(self):
        # print(f"name : {self.name} \n age : {self.age}") 
        return f"name : {self.name} \n age : {self.age}"


p1 = Person('akbar', 28)
print(p1)
print(p1.name)
print(p1.age)
info = p1.personDetail()
print(info)
# p1.name = 'akbar'
# p1.age = 28

