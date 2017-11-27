jogadas = int(input(""))
ganhadores = [0 for i in range(jogadas)]
for i in range(jogadas):
	jogadores = input("")
	jog1, escolha1, jog2, escolha2 = jogadores.split()

	nums = input("")
	num1 = int(nums.split()[0])
	num2 = int(nums.split()[1])

	soma = num1 + num2
	
	if soma % 2 == 0:
		if escolha1 == "PAR":
			ganhadores[i] = jog1
		else:
			ganhadores[i] = jog2
	elif soma % 2 == 1:
		if escolha1 == "IMPAR":
			ganhadores[i] = jog1
		else:
			ganhadores[i] = jog2
	
for ganhador in ganhadores:
	print(ganhador)