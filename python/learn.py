def ecrire(contenu):
    with open("python.txt", "a") as f:
        f.write(contenu + "\n")
    
def supprimer():
    with open("python.txt", "w") as f:
        f.write("")
    
ecrire("rien de plus simple")
ecrire("ligne numero deux")
supprimer()

with open("python.txt", "r") as f:
    lire = f.read()
    print(lire)

