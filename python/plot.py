courses = ["pain", "lait", "oeufs", "pommes", "riz"]

def all_in(liste):
    for ingredient in liste:
        print(ingredient)
    print(liste[0])
    print(liste[-1])
    liste.append("bananes")
    liste.remove(liste[1])
    for ingredient in liste:
        print(ingredient)
    a = 0
    for ingredient in liste:
        a += 1
    print(a)
    for ingredient in liste:
        print(f"{ingredient}\n")
    for ingredient in liste:
        if ingredient == "riz":
            print(ingredient)
        

all_in(courses)