option = input("")
soma = 0
matriz = [[0 for i in range(12)] for j in range(12)]

for i in range(12):
	for j in range(12):
		matriz[i][j] = float(input(""))
		if i < j:
			soma += matriz[i][j]

if option == 'S':
	print("%.1f" %soma)

elif option == 'M':
	media = soma/66
	print("%.1f" %media)
