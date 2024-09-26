def suma(sumar):
    numeros = 0
    for i in sumar:
        numeros = numeros + i
        
    return numeros

if __name__ == "__main__":
    sumar = [4, 5, 2, 6, 9]
    
    print(suma(sumar))
    
