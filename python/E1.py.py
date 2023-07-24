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



