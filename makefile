grafica.png: grafica.py data.txt
	python3 grafica.py
data.txt: ejercicio.cpp
	c++ ejercicio.cpp -o ejercicio
	./ejercicio > data.txt
