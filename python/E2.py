#字串常用工具
my_str = "I have a dream"
print(my_str.split()) #字串分隔
my_list = ['I', 'have', 'a', 'dream']
print(" ".join(my_list)) #字串組合
#大小寫轉換
print(my_str.lower())
print(my_str.upper())
#判斷是否數字
k="1236567"
print(k.isdigit())
#判斷開頭
print(my_str.startswith("I"))
#取代
print(my_str.replace("a dream", "an apple"))
#判斷出現特定字，出現的次數
print(my_str.count("a"))
#字串格式化
print("Today is {}.".format(my_str))
#len() 回傳字元數
print(len(my_str))
#移除指定符號
my_str = "    I have a dream    "
print(my_str.strip())


#模組import
import max
print(f"{max.max_min(6,9,52)}")

#from 模組 import 函式名
from max import find_max
from max import find_min
print(str(find_max(6,9,19)))
print(str(find_min(6,9,19)))

#import 模組名稱 as 簡稱
import max as hi
hi.holle("Ivor")

import random
number = [1,2,3,4,5]
random.shuffle(number)
print(number)

a = random.choice(number)
print(a)

b = random.randint(1,13)
print(b)

import math
my_num = 3.14
print(math.floor(my_num))


























