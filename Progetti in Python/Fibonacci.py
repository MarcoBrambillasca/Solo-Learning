def fibonacci(n):
    primo_elemento = 0
    secondo_elemento = 1
    serie = []
    for i in range(n):
        serie.append(primo_elemento)
        elemento_successivo = primo_elemento + secondo_elemento
        primo_elemento = secondo_elemento
        secondo_elemento = elemento_successivo
    return serie

n = int(input("Inserisci il numero volte che vuoi iterare: "))
serie_fibonacci = fibonacci(n)
print("Serie di Fibonacci fino a", n, "termini:", serie_fibonacci)
