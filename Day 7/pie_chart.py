from matplotlib import pyplot as plt
Players = 'Ronaldo', 'Messi','Aaftab Pathan','Sam'
Score = [15,30,10,45]
explode = (0.1,0,0,0)
fig1,ax1 = plt.subplots()
ax1.pie(Score, explode=explode, labels=Players, autopct='%1.1f%%', shadow=True, startangle=90)
ax1.axis('equal')
plt.show()