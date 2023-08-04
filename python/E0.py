# print是python當中基礎的函式
# 表示輸出(字串、數字、布林、浮點數等)
print("你好") # 輸入字串時，需在頭尾加上 " 或 '

# input 表示輸入，要輸入完成才算結束程式
input("請輸入數字")
print(input("請輸入1個數字"))

# 變數variable ，當中設定的值是可變的
# 變數名稱規則如下
# 1.不能跟原本內建的函式相同
# 2.只能是字母、數字、_、的組合 (中文字也可以，只是通常部會這樣用)
# 3.開頭不能是數字
n=50

# 資料型態
# 每個類型都是有各自使用的地方
# type可以回傳資料型態
print(type(True)) # 回傳結果為bool

# 當遇到資料型態不同時，可以前面加個f，然後再使用{}，就可以轉成字串str
n=12345
print(f"你{n}好") # 此方法只能轉成str
# 也可以前面加上想要轉變成的資料型態，在用()包住要轉變的資料
str(n)
print(type(float(n)))

# 運算[+ ,- ,* ,/ ,// ,**(次方) ,%(餘數) ]
print(8//2) # 為int
print(8/2) # 為float
# m=3
# m+=1 = m=3+1 =4

# 布林值(是非) (!=  是不相等的意思)
a = 10
b = 20
print(a!=b)
# and,or not   與C++不同，是直接使用
print(a!=b and a<b)

# if句 後面要加[:]，且下一行的執行指令，要有四個空格
if a==b:  #如果
    print("k")
elif a<b:  #否則如果
    print("o")
else:  #否則
    print("ok")

# 函式 def
# 先設定一個函式，後面要: ，下一行要四個空格
def find_min(num1, num2, num3):
    if num1<=num2 and num1<=num3:
        return num1
    elif num2<=num1 and num2<=num3:
        return num2
    else:
        return num3
def find_min(num1, num2, num3):
    if num1<=num2 and num1<=num3:
        return num1
    elif num2<=num1 and num2<=num3:
        return num2
    else:
        return num3

def max_min(num1, num2, num3):
    if type(num1) != int or type(num2) != int or type(num3) != int:
        return "請輸入整數"
    else:
        return find_max(num1, num2, num3) -  find_min(num1, num2, num3)
num1=input()
num2=input()
num3=input()

num = max_min(int(num1) ,int(num2) ,int(num3))

#接著就可以使用創建的函式
print(num)

#清單串列(list、str轉換)   #tuple元組()與清單有差別

人選 = ["大雄", "A夢", "胖虎", "小夫"]
print(人選[-1])
print(人選[1:3]) #[:]
字串 = "無敵大麥克"
print(字串[2:])
print(len(字串))
print(list(字串))

#split分割 ,join結合

日期 = "2023/04/01"
print(日期.split("/"))
print("/".join(人選))

'''
清單資料
新增append,extend
刪除pop,remove
'''
#人選.append("靜香")
#人選.extend(["幸助","小杉"])
人選.remove("大雄")
#人選.pop(0)

#迴圈(for loop, while loop)

早餐 = ["大冰奶","漢堡","三明治","蛋餅"]
for 餐點 in 早餐:
    print(餐點)

編號 = 0
while 編號 < len(早餐):
    print(早餐[編號])
    編號 += 1

#continue,break
for 餐點 in 早餐:
    if 餐點 == "三明治":
        break
    print(餐點)

#for應用

數列 = [1,2,3,4,5,6]
乘積 = 1
for 數字 in 數列:
    乘積 *= 數字
print(乘積)

#range(起始值,結束值,間距值)
for i in range(1,10):
    print(i)

#清單合併(子項合併,按序合併,直接合併)
#子項合併 list_combined = list_1 + list_2
#兩清單內資料合併
list_1 = [1, 2, 3]
list_2 = [4, 5, 6]

list_combined = list_1 + list_2
print(list_combined)

#按序合併 len(list_1) == len(list_2)
#資料合併，以一對作為基礎單元處理
list_1 = [1, 2, 3]
list_2 = [4, 5, 6]

list_combined = list(zip(list_1, list_2))

print(list_combined[0])

# zip() 把兩項清單(列表)按每一項合併如果兩項清單的項目數不一樣
# 如果兩項清單的項目數不一樣，則會只顯示有合併的項目
# 出來的資料型態為tuple
list_3 = [9,8,7,6,5]
m = list(zip(list_1, list_3))
print(m)

#直接合併 list_combined = [list_1, list_2]
#可視為更高層的列表的項目
list_1 = [1, 2, 3]
list_2 = [4, 5, 6]

list_combined = [list_1, list_2]
print(list_combined)

#資料型態為list
X=['y',"skfu",1,1.5]
print(X)
print(type(X[0]))

#元組tuple     和清單list相似，差在()[]，且當中的資料不可更變
scores = (10,20,30,40,50)
#scores[0] = 60
print(scores)
#使用在不需變動的資料，防止資料被更動


#字典Dictionaries
#項目item ---> key鍵 : value值(可字串、布林、數字、清單)
手機 = {
    "廠牌" : "蘋果",
    "型號" : "iPhone 14 Pro",
    "容量" : "512 GB"
}
print(手機["容量"]) #可更改、新增資料
手機["顏色"] = ["黑色","白色","紫色"]
print(手機.get("顏色")) #len

#刪除pop ,popitem ,clear


for 規格 in 手機.keys():
    print(規格)
for U in 手機.items():
    print(U)


#集合set{}  ,一群資料，無順序性
s1 = {3,4,5}
s2 = {4,5,6,7}
print(2 in s1)

#交集& 、聯集| 、差集- 、反交集^
s3 = s1&s2 #取兩個集合中，相同的資料
print(s3)
s4 = s1|s2 #取兩個集合中所有的資料，但不取重複的資料
print(s4)
s5 = s1-s2 #從s1中減去和s2重疊的部分
print(s5)
s6 = s1^s2 #取兩個集合中，不相同的部分
print(s6)

#字串拆解  set(字串)
s=set("Hello")
print(s)
print("H" in s)

















































































