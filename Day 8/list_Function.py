lucky_numbers = [4,8,15,16,42]
friends = ["Sanket", "Mane","Sam", "Prasad", "Rushi", "Aftab",]
friends.extend(lucky_numbers)

'''add item in list'''
friends.append("Star")

'''insert name in list'''
friends.insert(1, "Kelly")

'''remove item in list'''
friends.remove("Sanket")

'''pop items'''
friends.pop()

print(friends)
'''index of item'''
print(friends.index("Sam"))

'''count how many time in list'''
print(friends.count("Sanket"))

lucky_numbers.reverse()