#random 隨機數

import random

print(random.random()) #產生一個 0.0～1.0 之間的隨機浮點數
"""
random.seed(1) #設定隨機數的種子
print(random.random())
random.seed(1)
print(random.random())
random.seed(2)
print(random.random())
"""
print(random.uniform(3,5)) #產生一個 x～y 之間的隨機浮點數

print(random.randint(1,13)) #產生一個 x～y 之間的隨機整數

#產生一個間隔為 step，x～y 之間的隨機整數
print(random.randrange(3,10,3))
print(random.randrange(5)) #0~y,間格1

#choice 隨機取出一個項目(用於字串、串列或 tuple)
print(random.choice([1,2,3,4,5]))  #   串列
print(random.choice((1,2,3,4,5)))  #   tuple
print(random.choice("12345"))      #   字串

#choices 隨機取出' k '個項目(用於字串、串列或 tuple)
# 可能重複
print(random.choices((1,2,3,4,5),k=3))# 可能重複

#sample 隨機取出' k '個項目(用於字串、串列或 tuple)
# 不會重複 ,k 一定要填入數字，且不能大於物件的長度
print(random.sample([1,2,3,4,5], k=4))

number = [1,2,3,4,5]
random.shuffle(number) #可將串列順序打亂
print(number)



#time 時間處理

import time

#回傳從 1970/1/1 00:00:00 算起至今的秒數
print(time.time()) # 1/1000000 秒
print(time.time_ns()) #ns 數 ( 1/1,000,000,000 秒 )

#ctime() 能將 time.time() 得到的時間，轉換為本地時間(文字顯示)
t = time.time()
print(time.ctime(t))
print(type(time.ctime(t)))

#sleep(sec) 能將程式暫停指定的秒數，停止結束後，在繼續後面的程式
print(time.ctime(time.time()))
time.sleep(2)                    # 暫停兩秒
print(time.ctime(time.time()))

#localtime()、gmtime()
#能將 time.time() 得到的時間，轉換為 struct_time 格式的本地時間
#差別 time.gmtime() 是回傳 UTC 時間(世界協調時間)
result = time.localtime(t)
print("結果：", result)
print("年：", result.tm_year)
print("月：", result.tm_mon)
print("日：", result.tm_mday)
print("時：", result.tm_hour)
print("分：", result.tm_min)
print("秒：", result.tm_sec)
print("星期幾：", result.tm_wday)

result = time.gmtime(t)
print("結果：", result)

#mktime()
#可將 struct_time 格式的時間轉換回秒數
print(time.mktime(result))

#asctime()
#可將 struct_time 格式的時間轉換為str
print(time.asctime(result))

#strftime() 可以將時間轉換為"特定格式字串"
#strptime() 會將"特定格式字串"，轉換為 struct_time 格式的時間
t1 = result
t2 = time.strftime('%Y/%m/%d %H:%M:%S',t1)
t3 = time.strptime(t2, '%Y/%m/%d %H:%M:%S')
print(t2)
print(t3)



#datatime 日期和時間

import datetime

#1. date
#處理日期相關的操作，本身包含三個屬性：year、month、day，分別用逗號區隔
d = datetime.date(2020,1,1)
print(d)

today = datetime.date.today()
print(today)                 # today() 顯示當日日期
print(today.year)            # 年
print(today.month)           # 月
print(today.day)             # 日
print(today.weekday())       # 星期幾 ( x-1 )從0開始
print(today.isoweekday())    # 星期幾 ( x )從1開始
print(today.isocalendar())   # ( 年、第幾週、isoweekday )
print(today.isoformat())     # ISO 格式的日期字串
print(today.ctime())         # 日期和時間的字串
print(today.strftime('%Y.%m.%d'))  # 特定格式字串所表示的時間

d1 = datetime.date(2020, 6, 24)
d2 = datetime.date(2021, 11, 24)
print(abs(d1-d2).days) #日期相差的天數
print(d1-d2)

#2. time
#處理時間相關的操作
#本身包含下列幾個屬性：hour、minute、second、microsecond、tzinfo
thisTime = datetime.time(12,0,0,1)
print(thisTime)

#tzinfo 表示時區 ,預設為UTC時區
#tzinfo = datetime.timezone(datetime.timedelta(hours=x[UTC時差值])
thisTime = datetime.time(14,0,0,1,tzinfo=datetime.timezone(datetime.timedelta(hours=8)))
print(thisTime)
print(thisTime.isoformat())   # ISO 格式的時間字串
print(thisTime.tzname())      # 目前時區資訊
print( thisTime.strftime('%H:%M:%S'))   # 特定格式字串所表示的時間

newTime = thisTime.replace(hour=20)
print(newTime)


#3. datetime
#處理日期與時間相關的操作
#屬性：year、month、day、hour、minute、second、microsecond、tzinfo

print(datetime.datetime(2020,1,1,20,20,20,20))

print(datetime.datetime.today())    # today()，回傳目前的日期與時間

print(datetime.datetime.utcnow())   # utcnow()，回傳目前的日期與時間

print(datetime.datetime.now(tz=datetime.timezone(datetime.timedelta(hours=8))))
# now()，回傳目前的日期與時間，可加入 tz 參數設定時區

print("now")

now = datetime.datetime.now(tz=datetime.timezone(datetime.timedelta(hours=8)))
print(now)
print(now.date())         # 日期
print(now.time())         # 時間
print(now.tzname())       # 時區
print(now.weekday())      # 星期幾 ( x-1 )從0開始
print(now.isoweekday())   # 星期幾 ( x )從1開始
print(now.isocalendar())  # 年、第幾週、星期幾(isoweekday)
print(now.isoformat())    # ISO 格式的日期字串
print(now.ctime())        # 日期和時間的字串
print(now.strftime('%Y/%m/%d %H:%M:%S'))  # 特定格式字串
print(now.timetuple())    # time.struct_time



#4. timedelta
#用於日期或時間的計算，增加或減少日期或時間
#屬性: days、seconds、microseconds、milliseconds、minutes、hours、weeks
#預設值都是 0

today = datetime.datetime.now()
yesterday = today - datetime.timedelta(days=1)
tomorrow = today + datetime.timedelta(days=1)
nextweek = today + datetime.timedelta(weeks=1)
print(today)
print(yesterday)
print(tomorrow)
print(nextweek)



#5. timezone
#用於時區的轉換，主要和 datetime.datetime、datetime.time 互相搭配使用

zone = datetime.timezone(datetime.timedelta(hours=8))
now = datetime.datetime.now(tz=tzone)
print(now)






