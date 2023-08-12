import random
import string
number = string.digits
letter = string.ascii_letters
alphabet =list( number + letter)

random.shuffle(alphabet)
m = int(input("位數"))
password ="".join( alphabet[:m])
print(f"密碼:{password}")

