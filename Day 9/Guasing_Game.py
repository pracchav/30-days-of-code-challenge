secret_word = "Starwar"
guess = ""
guess_count = 0
guess_limit = 3
out_of_guasses = False
while guess != secret_word and not(out_of_guasses):
    if guess_count< guess_limit:
        guess = input("Enter Guess: ")
        guess_count += 1
    else:
        out_of_guasses = True

if out_of_guasses:
    print("You are out of guesses YOU LOSE!")
else:
    print("You Win!")