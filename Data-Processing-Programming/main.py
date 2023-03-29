a = "Life is too, short, You need Python"

print(a[0])
print(a[0:4])
print(a[::2])

b = "123456789"
print(b[::-1])

c = "I eat %d apples." % 3
d = "I eat " + str(3) + " apples."
print(c)
print(d)

number = 10
day = "three"
e = "I ate %d apples. so I was sick for %s days" % (number, day)
print(e)

f = "adfs sfdwji {} afaefgse".format("안녕")
print(f)

g = "asdaf {name} segsrg ".format(name="홍길동")
print(g)

h = "aef {age} sgwekgj {name} jflkwejgl".format(name="홍길동", age=44)
print(h)

name = "int"
i = f"나의 이름은 {name}입니다"
print(i)

j = "%10s" % "hi"
print(j)

k = "hobby"
print(k.count('b'))
print(k.find('b'))
print(k.find('x'))

l = ",".join("abcd")
print(l)
m = ",".join(["a", "b", "c"])
print(m)

n = "Life is too short"
print(n.replace("Life", "Your leg"))

