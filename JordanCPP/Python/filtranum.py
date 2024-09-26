numeros = [13, 101, 28883, 13, 345673, 55, 9, 110, 101]
resultado = []

def filtranum(numeros, resultado):
    cantidad = 0
    for i in numeros:
        iposicion = str(i)
        if iposicion[0] == iposicion[-1]:
            resultado.append(int(iposicion))   
            cantidad = cantidad + 1


    return cantidad
if __name__ == '__main__':
    print(filtranum(numeros, resultado))