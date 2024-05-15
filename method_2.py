class Hello:
    pass
def world (self):
    return "From Outside"

Hello.text = world

obj = Hello()
text = obj.text()
print(text)
