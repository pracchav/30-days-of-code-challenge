
is_male = True
is_tall = False

if is_male or is_tall:
    print("You are a Tall male ")
elif is_male and not(is_tall):
    print("You are a short Male")
elif not(is_male) and is_tall:
    print("You are not a male but you are tall")
else:
    print("You re neiter male not tall or both")