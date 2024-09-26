nombres = ["pepe","juan","pedro","limonada","lopez"] #5 elementos
#len(Tulista, elementos) -> Te da la cantidad de elementos de tu lista
#lista.append(x) -> Agrega elementos o variables a tu lista
def dameLongitudes(nombres):
    cantidadDeLetras = []
    for i in range(len(nombres)):
        k = len(nombres[i])
        cantidadDeLetras.append(k)
    return cantidadDeLetras

if __name__ == "__main__":
    print(dameLongitudes(nombres))