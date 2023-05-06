letter = ['a','b','d','e','i','j','o']
def filtervowels(letter):
    vowels = ['a','e','i','o','u']
    if(letter in vowels):
        return True
    else:
        return False
    filtervowels = filter(filtervowels,letter)
    print("the filterd vowels are: ")
    for vowel in filtervowels:
        print(vowel)