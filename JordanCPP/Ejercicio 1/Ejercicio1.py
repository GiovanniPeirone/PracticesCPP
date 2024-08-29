print("Inicio")

a = 13
b = 2           #Tiene que ser mayor que 1 y no dividirse por 0, para evitar problemas
restoTotal = []

while b > 1:
        resto = a % b
        restoTotal.append(resto)
        print(f"{a} % {b}", resto)
        a = a // b
        print("a es: ", a)
        if a == 0:
            break
        
print("Resto es ", restoTotal)
'''
Subtareas
1. N = 1, B = 10 (7 puntos)
2. N = 1, B = 2 (10 puntos)
3. N = 1, 1 ≤ X1 ≤ 5 (11 puntos)
4. B = 10 (7 puntos)
5. B = 2 (10 puntos)
6. 1 ≤ Xi ≤ 5 (10 puntos)
7. 1 ≤ Xi ≤ 10 (15 puntos)
8. Sin más restricción (30 puntos)

Este codigo logra hacer todas las subtareas a mi parecer y puede manejar las restricciones

1 ≤ N ≤ 100         (Deberia de Poder hacer 100 calculos pese a la lentitud de Python)
2 ≤ B ≤ 10          (Puede hacer la base del 2 al 10)
1 ≤ Xi ≤ 10**9      (Puede hacer calculos mas alla de 1.000.000.000)
'''
print("Fin")