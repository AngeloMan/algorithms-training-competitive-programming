def chech_palin(word: str) -> str:
    half = int(len(word)/2)
    half_ = half
    if len(word) % 2 == 1:
        half_ +=1
    print(word[half_:len(word)])
    return word[half_:len(word)][::-1] == word[0:half]

palavras = [
    "arara",
    "reviver",
    "radar",
    "osso",
    "mirim",
    "banana",
    "python",
    "palindromo",
    "level",
    "racecar",
    "civic",
    "deified",
    "rotor",
    "madam",
    "noon",
]

for i in palavras:
    print(i, chech_palin(i))