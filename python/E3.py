#物件導向
# class 類別, Object 物件, attribute 屬性, method 方法

print(type("fate"))

#def __init[初始化]__(self[角色本身])建構函式，初始化例項的屬性

#類別class    名稱英文開頭大寫
class GameCharactor:
    level = 1
    experience = 0
    #建構式
    def __init__(self, name, age):
        self.name = name
        self.age = age
    #方法method
    def 衝鋒(self):
        print(f"{self.name}快速衝向了敵人")
    def 迴避(self):
        print(f"{self.name}靈巧躲過了敵人的攻擊")



role1 = GameCharactor("Joy",25)
role2 = GameCharactor("Leo",15)
print(role2.name)
print(role1.age)
print(role1.age)
print(role2.age)
GameCharactor.age=10
print(role1.age)
print(role2.age)
role1.衝鋒()
role2.迴避()

print(role1.level)

role1.height = "176"
print(role1.height)


#繼承 inheritance
class 戰士(GameCharactor):
    def 攻擊(self):
        print(f"{self.name}攻擊了敵人")

role3 = 戰士("Tom",30)
role3.攻擊()
role3.迴避()

#isinstance
class 盜賊:
    def 攻擊(self):
        print(f"{self.name}攻擊了敵人")

print(isinstance(role3, 戰士))
print(isinstance(role3, 盜賊))






































