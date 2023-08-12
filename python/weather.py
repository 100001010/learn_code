import requests
API = "979028e05c464ef3de7605f82ef5df68"
city = "台北市"
網址 = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={API}"
天氣資料 = requests.get(網址)
print(天氣資料.json())








