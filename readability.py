from cs50 import get_string
text = get_string("Text:")
n = len(text)
letter = 0
word = 0
sentence = 0
new = 0
for i in range(0,n):
    x = ord(text[i])
    if ((x >= 65 and x <= 90) or (x >= 97 and x <= 122)):
        letter = letter + 1
for j in range(0,n - 1):
    x = ord(text[j])
    y = ord(text[j + 1])
    if (((x >= 65 and x <= 90) or (x >= 97 and x <= 122)) and ((y >= 32 and y <= 34) or (y == 44) or (y == 46) or (y == 58) or (y == 59) or (y == 63))):
        word = word + 1
z = ord(text[n-1])
if ((z >= 32 and z <= 34) or (z == 44) or (z == 46) or (z == 58) or (z == 59) or (z == 63)):
    new = word
else:
    word = word + 1
    new = word
for k in range(0,n):
    s = ord(text[k])
    if ((s == 46) or (s == 33) or (s == 63)):
        sentence = sentence + 1
L = (letter / new) * 100
S = (sentence / new) * 100
index = 0.0588 * L - 0.296 * S - 15.8
grade = round(index)
if (grade < 1):
    print("Before Grade 1")
elif (grade >= 16):
    print("Grade 16+")
else:
    print("Grade %d" % (grade))