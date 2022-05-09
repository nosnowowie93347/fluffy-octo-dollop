import random
while True:
  response = input("What would you like to translate today?")
  end_of_word = response[1:len(response)]
  end_of_word_2 = response[2:len(response)]
  vowel = ('a', 'e', 'i', 'o', 'u')
  if response[0] in vowel:
   print(response + "ay")
  if response[0] and response[1] not in vowel:
    print(end_of_word_2 +response[0:2] + ("ay"))
  elif response[0] not in vowel:
    print(end_of_word + response[0] + ("ay"))
  
